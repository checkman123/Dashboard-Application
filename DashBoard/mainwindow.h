#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QTimeZone>
#include <QJsonArray>
#include "httpmanager.h"
#include "todolist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
        void setCurrentTime();
        void setWorldTime();

        void processImage(QPixmap *);
        void processWeatherJson(QJsonObject *json);
        void setPhotoDisplay();
        void setWeahterDisplay(QString weather);

        void on_imageDownloadButton_clicked();

        void on_worldComboBox_currentIndexChanged(int index);



        void on_actionOpen_To_Do_List_triggered();

        void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    HTTPManager *httpManager;
    int timerCount = 0;
    int photoNum = 2;
    todoList *myList;

};

#endif // MAINWINDOW_H
