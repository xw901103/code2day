#ifndef APPLICATION_H
#define APPLICATION_H

#include <QObject>
#include <QApplication>

class MainWindow;

class Application:public QObject {
	Q_OBJECT
        QApplication* app;
        MainWindow* mainWindow;
public:
	explicit Application(int argc,char ** argv);
	~Application();
        
        int exec();
};

#endif