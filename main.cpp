#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

/**
 * @brief Основная функция приложения.
 *
 * @param argc Количество аргументов командной строки.
 * @param argv Массив аргументов командной строки.
 * @return int Код возврата приложения.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv); ///< Создание приложения Qt.
    MainWindow w; ///< Создание основного окна приложения.
    w.show(); ///< Отображение основного окна.
    return a.exec(); ///< Запуск цикла обработки событий приложения.
}
