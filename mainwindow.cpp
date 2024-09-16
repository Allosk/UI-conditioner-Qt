#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "optiondialog.h"

/**
 * @brief Конструктор класса MainWindow.
 *
 * @param parent Указатель на родительский виджет.
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , temperature(0)
    , humidity(0)
    , pressure(0)
    , initialTemperature(0)
    , initialPressure(0)
    , isConditioningSystem1Enabled(true)
    , isConditioningSystem2Enabled(true)
    , isConditioningSystem3Enabled(true)
{
    ui->setupUi(this);
    ui->temp_label->setText(QString::number(temperature));
    ui->pressure_label->setText(QString::number(pressure));

    loadSettings();
}

/**
 * @brief Деструктор класса MainWindow.
 */
MainWindow::~MainWindow()
{
    saveSettings();
    delete ui;
}

/**
 * @brief Обработчик нажатия кнопки увеличения температуры.
 */
void MainWindow::on_plus_clicked()
{
    initialTemperature += 1;
    temperature = initialTemperature;

    updateTemperatureDisplay();
    saveSettings();
}

/**
 * @brief Обработчик нажатия кнопки уменьшения температуры.
 */
void MainWindow::on_minus_clicked()
{
    initialTemperature -= 1;
    temperature = initialTemperature;

    updateTemperatureDisplay();
    saveSettings();
}


/**
 * @brief Обработчик нажатия кнопки настроек.
 */
void MainWindow::on_option_button_clicked()
{
    optionDialog optionalDialog(this);

    optionalDialog.setInitialValues(temperature, humidity, pressure);
    ui->comboBoxTemp->setCurrentIndex(0);
    ui->comboBoxPressure->setCurrentIndex(0);

    if (optionalDialog.exec() == QDialog::Accepted) {
        temperature = optionalDialog.getTemperature();
        humidity = optionalDialog.getHumidity();
        pressure = optionalDialog.getPressure();

        initialTemperature = temperature;
        initialPressure = pressure;

        updateTemperatureDisplay();
        updatePressureDisplay();
        ui->humidity_label->setText(QString::number(humidity));
        saveSettings();
    }
}

/**
 * @brief Обработчик изменения текущего индекса в выпадающем списке температуры.
 *
 * @param index Новый индекс.
 */
void MainWindow::on_comboBoxTemp_currentIndexChanged(int index)
{
    updateTemperatureDisplay();
}

/**
 * @brief Обработчик изменения текущего индекса в выпадающем списке давления.
 *
 * @param index Новый индекс.
 */
void MainWindow::on_comboBoxPressure_currentIndexChanged(int index)
{
    updatePressureDisplay();
}

/**
 * @brief Обновляет отображение температуры в зависимости от выбранной единицы измерения.
 */
void MainWindow::updateTemperatureDisplay()
{
    double convertedTemp = 0.0;
    double currentTemp = initialTemperature;

    switch (ui->comboBoxTemp->currentIndex()) {
    case 0:
        convertedTemp = currentTemp;
        break;
    case 1:
        convertedTemp = (currentTemp * 9.0/5.0) + 32;
        break;
    case 2:
        convertedTemp = currentTemp + 273.15;
        break;
    default:
        break;
    }

    ui->temp_label->setText(QString::number(convertedTemp));

    if (isConditioningSystem1Enabled) {
        ui->labelTemp1->setText(QString::number(convertedTemp));
    }
    if (isConditioningSystem2Enabled) {
        ui->labelTemp2->setText(QString::number(convertedTemp));
    }
    if (isConditioningSystem3Enabled) {
        ui->labelTemp3->setText(QString::number(convertedTemp));
    }
}

/**
 * @brief Обновляет отображение давления в зависимости от выбранной единицы измерения.
 */
void MainWindow::updatePressureDisplay()
{
    double convertedPressure = 0.0;
    double currentPressure = initialPressure;

    switch (ui->comboBoxPressure->currentIndex()) {
    case 0:
        convertedPressure = currentPressure;
        break;
    case 1:
        convertedPressure = currentPressure / 133.322;
        break;
    default:
        break;
    }

    ui->pressure_label->setText(QString::number(static_cast<int>(convertedPressure)));

    if (isConditioningSystem1Enabled) {
        ui->labelPressure1->setText(QString::number(static_cast<int>(convertedPressure)));
    }
    if (isConditioningSystem2Enabled) {
        ui->labelPressure2->setText(QString::number(static_cast<int>(convertedPressure)));
    }
    if (isConditioningSystem3Enabled) {
        ui->labelPressure3->setText(QString::number(static_cast<int>(convertedPressure)));
    }
}

/**
 * @brief Сохраняет текущие настройки в XML-файл.
 */
void MainWindow::saveSettings()
{
    QFile file("settings.xml");
    if (!file.open(QIODevice::WriteOnly)) {
        return;
    }

    QXmlStreamWriter writer(&file);
    writer.setAutoFormatting(true);
    writer.writeStartDocument();

    writer.writeStartElement("Settings");

    writer.writeStartElement("Temperature");
    writer.writeAttribute("value", QString::number(temperature));
    writer.writeAttribute("unit", QString::number(ui->comboBoxTemp->currentIndex()));
    writer.writeEndElement();

    writer.writeStartElement("Pressure");
    writer.writeAttribute("value", QString::number(pressure));
    writer.writeAttribute("unit", QString::number(ui->comboBoxPressure->currentIndex()));
    writer.writeEndElement();

    writer.writeEndElement();
    writer.writeEndDocument();
}

/**
 * @brief Загружает настройки из XML-файла.
 */
void MainWindow::loadSettings()
{
    QFile file("settings.xml");
    if (!file.open(QIODevice::ReadOnly)) {
        return;
    }

    QXmlStreamReader reader(&file);

    while (!reader.atEnd() && !reader.hasError()) {
        reader.readNext();

        if (reader.isStartElement()) {
            if (reader.name() == QStringLiteral("Temperature")) {
                QXmlStreamAttributes attributes = reader.attributes();
                temperature = attributes.value(QStringLiteral("value")).toInt();
                initialTemperature = temperature;
                ui->comboBoxTemp->setCurrentIndex(attributes.value(QStringLiteral("unit")).toInt());
                ui->temp_label->setText(QString::number(temperature));
            } else if (reader.name() == QStringLiteral("Pressure")) {
                QXmlStreamAttributes attributes = reader.attributes();
                pressure = attributes.value(QStringLiteral("value")).toInt();
                initialPressure = pressure;
                ui->comboBoxPressure->setCurrentIndex(attributes.value(QStringLiteral("unit")).toInt());
                ui->pressure_label->setText(QString::number(pressure));
            }
        }
    }

    if (reader.hasError()) {
        // Обработка ошибок
    }

    reader.clear();
}

/**
 * @brief Применяет темную тему к приложению.
 */
void MainWindow::applyDarkTheme()
{
    qApp->setStyleSheet(
        "QWidget { background-color: #2b2b2b;  }"
        "QPushButton { background-color: #3c3c3c;}"
        "QComboBox { background-color: #3c3c3c; color: #ffffff; }"
        "QComboBox QAbstractItemView {border: 2px solid #000000; background-color: #000000;color: #ffffff;}"
        "QLineEdit { background-color: #3c3c3c; color: #ffffff; }"
        "QLabel { color: #ffffff; }"
        "QGraphicsView { background-color: #1c1c1c; }"
        );
}

/**
 * @brief Применяет светлую тему к приложению.
 */
void MainWindow::applyLightTheme()
{
    qApp->setStyleSheet("");
}

/**
 * @brief Обработчик нажатия кнопки для смены темы.
 */
void MainWindow::on_darkTheme_button_clicked()
{
    darkThemeEnabled = !darkThemeEnabled;
    if (darkThemeEnabled) {
        applyDarkTheme();
    } else {
        applyLightTheme();
    }
}

/**
 * @brief Обработчик нажатия кнопки увеличения значения направления.
 */
void MainWindow::on_plusDirection_clicked()
{
    currentValue = ui->labelDegree->text().toInt();

    currentValue++;

    ui->labelDegree->setText(QString::number(currentValue));

    if (isConditioningSystem1Enabled) {
        ui->labelDegree1->setText(QString::number(currentValue));
    }
    if (isConditioningSystem2Enabled) {
        ui->labelDegree2->setText(QString::number(currentValue));
    }
    if (isConditioningSystem3Enabled) {
        ui->labelDegree3->setText(QString::number(currentValue));
    }
}

/**
 * @brief Обработчик нажатия кнопки уменьшения значения направления.
 */
void MainWindow::on_minusDirection_clicked()
{
    currentValue = ui->labelDegree->text().toInt();

    currentValue--;

    ui->labelDegree->setText(QString::number(currentValue));

    if (isConditioningSystem1Enabled) {
        ui->labelDegree1->setText(QString::number(currentValue));
    }
    if (isConditioningSystem2Enabled) {
        ui->labelDegree2->setText(QString::number(currentValue));
    }
    if (isConditioningSystem3Enabled) {
        ui->labelDegree3->setText(QString::number(currentValue));
    }
}

/**
 * @brief Отключает систему кондиционирования для заданной вкладки.
 *
 * @param tabIndex Индекс вкладки.
 */
void MainWindow::disableConditioningSystem(int tabIndex)
{
    QWidget* tab = ui->qTabWidget->widget(tabIndex);

    if (tab) {
        QList<QWidget*> widgets = tab->findChildren<QWidget*>();
        for (QWidget* widget : widgets) {
            widget->setDisabled(true);
        }

        QLabel* labelDegree = tab->findChild<QLabel*>("labelDegree" + QString::number(tabIndex + 1));
        QLabel* labelTemp = tab->findChild<QLabel*>("labelTemp" + QString::number(tabIndex + 1));
        QLabel* labelHumidity = tab->findChild<QLabel*>("labelHumidity" + QString::number(tabIndex + 1));
        QLabel* labelPressure = tab->findChild<QLabel*>("labelPressure" + QString::number(tabIndex + 1));

        if (labelDegree) {
            labelDegree->setDisabled(true);
        }
        if (labelTemp) {
            labelTemp->setDisabled(true);
        }
        if (labelHumidity) {
            labelHumidity->setDisabled(true);
        }
        if (labelPressure) {
            labelPressure->setDisabled(true);
        }

        switch (tabIndex) {
        case 0:
            isConditioningSystem1Enabled = false;
            break;
        case 1:
            isConditioningSystem2Enabled = false;
            break;
        case 2:
            isConditioningSystem3Enabled = false;
            break;
        default:
            break;
        }
    }
}

/**
 * @brief Включает систему кондиционирования для заданной вкладки.
 *
 * @param tabIndex Индекс вкладки.
 */
void MainWindow::enableConditioningSystem(int tabIndex)
{
    QWidget* tab = ui->qTabWidget->widget(tabIndex);

    if (tab) {
        QList<QWidget*> widgets = tab->findChildren<QWidget*>();
        for (QWidget* widget : widgets) {
            widget->setEnabled(true);
        }

        QLabel* labelDegree = tab->findChild<QLabel*>("labelDegree" + QString::number(tabIndex + 1));
        QLabel* labelTemp = tab->findChild<QLabel*>("labelTemp" + QString::number(tabIndex + 1));
        QLabel* labelHumidity = tab->findChild<QLabel*>("labelHumidity" + QString::number(tabIndex + 1));
        QLabel* labelPressure = tab->findChild<QLabel*>("labelPressure" + QString::number(tabIndex + 1));

        if (labelDegree) {
            labelDegree->setEnabled(true);
        }
        if (labelTemp) {
            labelTemp->setEnabled(true);
        }
        if (labelHumidity) {
            labelHumidity->setEnabled(true);
        }
        if (labelPressure) {
            labelPressure->setEnabled(true);
        }

        switch (tabIndex) {
        case 0:
            isConditioningSystem1Enabled = true;
            break;
        case 1:
            isConditioningSystem2Enabled = true;
            break;
        case 2:
            isConditioningSystem3Enabled = true;
            break;
        default:
            break;
        }
    }
}

/**
 * @brief Обработчик нажатия кнопки для системы кондиционирования 1.
 */
void MainWindow::on_conderButton1_clicked()
{
    if (isConditioningSystem1Enabled) {
        disableConditioningSystem(0);
    } else {
        enableConditioningSystem(0);
    }
}

/**
 * @brief Обработчик нажатия кнопки для системы кондиционирования 2.
 */
void MainWindow::on_conderButton2_clicked()
{
    if (isConditioningSystem2Enabled) {
        disableConditioningSystem(1);
    } else {
        enableConditioningSystem(1);
    }
}

/**
 * @brief Обработчик нажатия кнопки для системы кондиционирования 3.
 */
void MainWindow::on_conderButton3_clicked()
{
    if (isConditioningSystem3Enabled) {
        disableConditioningSystem(2);
    } else {
        enableConditioningSystem(2);
    }
}
