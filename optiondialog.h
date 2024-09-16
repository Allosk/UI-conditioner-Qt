#ifndef OPTIONDIALOG_H
#define OPTIONDIALOG_H

#include <QDialog>
#include <QIntValidator>

namespace Ui {
class optionDialog;
}

/**
 * @class optionDialog
 * @brief Класс optionDialog предоставляет диалог для настройки параметров.
 */
class optionDialog : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Конструктор класса optionDialog.
     * @param parent Родительский виджет.
     */
    explicit optionDialog(QWidget *parent = nullptr);

    /**
     * @brief Деструктор класса optionDialog.
     */
    ~optionDialog();

    /**
     * @brief Получает текущее значение температуры.
     * @return Значение температуры.
     */
    double getTemperature() const;

    /**
     * @brief Получает текущую единицу измерения температуры.
     * @return Единица измерения температуры.
     */
    QString getTemperatureUnit() const;

    /**
     * @brief Получает текущее значение влажности.
     * @return Значение влажности.
     */
    int getHumidity() const;

    /**
     * @brief Получает текущее значение давления.
     * @return Значение давления.
     */
    int getPressure() const;

    /**
     * @brief Получает текущую единицу измерения давления.
     * @return Единица измерения давления.
     */
    QString getPressureUnit() const;

    /**
     * @brief Устанавливает начальные значения параметров.
     * @param temp Значение температуры.
     * @param hum Значение влажности.
     * @param pres Значение давления.
     */
    void setInitialValues(int temp, int hum, int pres);

    /**
     * @brief Устанавливает единицу измерения температуры.
     * @param unit Единица измерения температуры.
     */
    void setTemperatureUnit(const QString &unit);

private slots:
    /**
     * @brief Обрабатывает нажатие кнопки "OK".
     */
    void on_ok_button_clicked();

    /**
     * @brief Обрабатывает нажатие кнопки "Cancel".
     */
    void on_cancel_button_clicked();

private:
    Ui::optionDialog *ui; ///< Указатель на пользовательский интерфейс.
};

#endif // OPTIONDIALOG_H
