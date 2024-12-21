// 创建于2024.12.21
// NMCL 主程序

#include <mainwindow/mainwindow.hpp>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
