#include "application.hpp"
#include "mainwindow.hpp"

Application::Application(int argc, char** argv) : QObject(), app(0), mainWindow(0) {
    app = new QApplication(argc, argv);
    mainWindow = new MainWindow();
}

Application::~Application() {
    if (app)
        delete app;
    if (mainWindow)
        delete mainWindow;
}

int Application::exec() {
    mainWindow->show();
    return app->exec();
}
