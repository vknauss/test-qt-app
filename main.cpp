#include <QApplication>
#include <QFrame>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QSystemTrayIcon>

int main(int argc, char** argv)
{
    QApplication application(argc, argv);
    application.setQuitOnLastWindowClosed(false);

    QMainWindow mainWindow;

    QFrame frame(&mainWindow);
    QVBoxLayout frameLayout(&frame);
    mainWindow.setCentralWidget(&frame);

    QLabel label(&frame);
    label.setText("Test");
    frameLayout.addWidget(&label, 0, Qt::AlignCenter);

    QPushButton closeButton;
    closeButton.setText("close");
    QObject::connect(&closeButton, &QPushButton::pressed, &mainWindow, &QMainWindow::close);
    frameLayout.addWidget(&closeButton);

    QPushButton quitButton;
    quitButton.setText("quit");
    QObject::connect(&quitButton, &QPushButton::pressed, &application, &QApplication::quit);
    frameLayout.addWidget(&quitButton);

    QSystemTrayIcon trayIcon;
    trayIcon.setIcon(QIcon(":/icons/tray.svg"));
    QObject::connect(&trayIcon, &QSystemTrayIcon::activated, &mainWindow, &QMainWindow::show);
    trayIcon.show();

    return application.exec();
}
