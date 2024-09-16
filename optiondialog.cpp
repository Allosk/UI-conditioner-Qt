#include "optiondialog.h"
#include "ui_optiondialog.h"

/**
 * @brief Конструктор класса optionDialog.
 *
 * @param parent Указатель на родительский виджет.
 */
optionDialog::optionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::optionDialog)
{
    ui->setupUi(this);
    ui->temp_lineEdit->setValidator(new QIntValidator(-273, 1000, this));
    ui->humidity_lineEdit->setValidator(new QIntValidator(0, 100, this));
    ui->pressure_lineEdit->setValidator(new QIntValidator(0, 100000, this));
}

/**
 * @brief Деструктор класса optionDialog.
 */
optionDialog::~optionDialog()
{
    delete ui;
}

/**
 * @brief Возвращает значение температуры.
 *
 * @return Значение температуры.
 */
double optionDialog::getTemperature() const
{
    return ui->temp_lineEdit->text().toDouble();
}

/**
 * @brief Возвращает значение влажности.
 *
 * @return Значение влажности.
 */
int optionDialog::getHumidity() const
{
    return ui->humidity_lineEdit->text().toInt();
}

/**
 * @brief Возвращает значение давления.
 *
 * @return Значение давления.
 */
int optionDialog::getPressure() const
{
    return ui->pressure_lineEdit->text().toInt();
}

/**
 * @brief Устанавливает начальные значения для полей ввода.
 *
 * @param temp Начальное значение температуры.
 * @param hum Начальное значение влажности.
 * @param pres Начальное значение давления.
 */
void optionDialog::setInitialValues(int temp, int hum, int pres)
{
    ui->temp_lineEdit->setText(QString::number(temp));
    ui->humidity_lineEdit->setText(QString::number(hum));
    ui->pressure_lineEdit->setText(QString::number(pres));
}

/**
 * @brief Обработчик нажатия кнопки "ОК".
 */
void optionDialog::on_ok_button_clicked()
{
    accept();
}

/**
 * @brief Обработчик нажатия кнопки "Отмена".
 */
void optionDialog::on_cancel_button_clicked()
{
    reject();
}
