#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    ui->temperatureSpinBox->setRange(-100, 100); // допустимый диапазон значений для температуры
    ui->humiditySpinBox->setRange(0, 100); // допустимый диапазон значений для влажности
    ui->pressureSpinBox->setRange(0, 2000); // допустимый диапазон значений для давления
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

int SettingsDialog::getTemperature() const
{
    return ui->temperatureSpinBox->value();
}

QString SettingsDialog::getTemperatureUnit() const
{
    return ui->temperatureUnitComboBox->currentText();
}

int SettingsDialog::getHumidity() const
{
    return ui->humiditySpinBox->value();
}

int SettingsDialog::getPressure() const
{
    return ui->pressureSpinBox->value();
}

QString SettingsDialog::getPressureUnit() const
{
    return ui->pressureUnitComboBox->currentText();
}

void SettingsDialog::on_okButton_clicked()
{
    accept(); // закрываем диалог с результатом Accepted
}

void SettingsDialog::on_cancelButton_clicked()
{
    reject(); // закрываем диалог с результатом Rejected
}
