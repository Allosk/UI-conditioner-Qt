#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QDialog>
#include <QGraphicsScene>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QFile>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

/**
 * @class MainWindow
 * @brief Класс MainWindow предоставляет основной интерфейс для приложения.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Конструктор класса MainWindow.
     * @param parent Родительский виджет.
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * @brief Деструктор класса MainWindow.
     */
    ~MainWindow();

private slots:
    /**
     * @brief Увеличивает значение температуры.
     */
    void on_plus_clicked();

    /**
     * @brief Уменьшает значение температуры.
     */
    void on_minus_clicked();

    /**
     * @brief Переключает состояние питания.
     */

    /**
     * @brief Открывает диалог настроек.
     */
    void on_option_button_clicked();

    /**
     * @brief Переключает между темной и светлой темами.
     */
    void on_darkTheme_button_clicked();

    /**
     * @brief Обновляет отображение температуры в зависимости от выбранного индекса.
     * @param index Индекс выбранного элемента.
     */
    void on_comboBoxTemp_currentIndexChanged(int index);

    /**
     * @brief Обновляет отображение давления в зависимости от выбранного индекса.
     * @param index Индекс выбранного элемента.
     */
    void on_comboBoxPressure_currentIndexChanged(int index);

    /**
     * @brief Обновляет отображение температуры.
     */
    void updateTemperatureDisplay();

    /**
     * @brief Обновляет отображение давления.
     */
    void updatePressureDisplay();

    /**
     * @brief Применяет темную тему.
     */
    void applyDarkTheme();

    /**
     * @brief Применяет светлую тему.
     */
    void applyLightTheme();

    /**
     * @brief Увеличивает значение направления.
     */
    void on_plusDirection_clicked();

    /**
     * @brief Уменьшает значение направления.
     */
    void on_minusDirection_clicked();

    /**
     * @brief Обрабатывает нажатие кнопки conderButton1.
     */
    void on_conderButton1_clicked();

    /**
     * @brief Обрабатывает нажатие кнопки conderButton2.
     */
    void on_conderButton2_clicked();

    /**
     * @brief Обрабатывает нажатие кнопки conderButton3.
     */
    void on_conderButton3_clicked();

private:
    Ui::MainWindow *ui; ///< Указатель на пользовательский интерфейс.
    int temperature; ///< Текущая температура.
    int humidity; ///< Текущая влажность.
    int pressure; ///< Текущее давление.
    double initialTemperature; ///< Начальное значение температуры.
    double initialPressure; ///< Начальное значение давления.
    int currentValue; ///< Текущее значение.
    bool isConditioningSystem1Enabled; ///< Состояние системы кондиционирования 1.
    bool isConditioningSystem2Enabled; ///< Состояние системы кондиционирования 2.
    bool isConditioningSystem3Enabled; ///< Состояние системы кондиционирования 3.
    bool darkThemeEnabled = false; ///< Состояние темной темы.

    /**
     * @brief Включает систему кондиционирования на указанной вкладке.
     * @param tabIndex Индекс вкладки.
     */
    void enableConditioningSystem(int tabIndex);

    /**
     * @brief Отключает систему кондиционирования на указанной вкладке.
     * @param tabIndex Индекс вкладки.
     */
    void disableConditioningSystem(int tabIndex);

    /**
     * @brief Сохраняет настройки в файл.
     */
    void saveSettings();

    /**
     * @brief Загружает настройки из файла.
     */
    void loadSettings();
};

#endif
