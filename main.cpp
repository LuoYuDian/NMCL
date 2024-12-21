// 创建于2024.12.21
// NMCL 主程序

#include <mainwindow/mainwindow.hpp>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.setWindowIcon(QIcon(":/modules/mainwindow/icon.qrc/logo.png"));
    window.show();
    return app.exec();
}
