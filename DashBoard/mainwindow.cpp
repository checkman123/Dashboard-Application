#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonObject>
#include <QJsonArray>
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    timer(new  QTimer),
    httpManager(new  HTTPManager),
    myList(new todoList(this))
{
    ui->setupUi(this);


    connect(timer, SIGNAL(timeout()), this, SLOT(setCurrentTime()));
    connect(timer, SIGNAL(timeout()), this, SLOT(setWorldTime()));
    connect(timer, SIGNAL(timeout()), this, SLOT(setPhotoDisplay()));
    on_imageDownloadButton_clicked();
    setCurrentTime();
    setWorldTime();
    timer->start(1000);

    connect(httpManager, SIGNAL(ImageReady(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));
    connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject *)),
            this, SLOT(processWeatherJson(QJsonObject *)));
    ui->tableView->setModel(myList);

    //read to-do list
    QString fileName = "://resources/todoList.csv";

    myList->openFile(fileName);
    ui->tableView->resizeColumnsToContents();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCurrentTime()
{
    QDateTime currentTime = QDateTime::currentDateTime();
    QString hour = currentTime.toString("hh");
    QString minute = currentTime.toString("mm");
    QString second = currentTime.toString("ss");

    if (hour >= "0" && hour < "5") {
        ui->greetLabel->setText("Good Evening!");
    }
    if (hour >= "5" && hour < "12") {
        ui->greetLabel->setText("Good Morning!");
    }
    if (hour >="12" && hour < "18") {
        ui->greetLabel->setText("Good Afternoon!");
    }
    if (hour >= "18" && hour <= "24") {
        ui->greetLabel->setText("Good Evening!");
    }

    ui->hourLCD->display(hour);
    ui->minuteLCD->display(minute);
    ui->secondLCD->display(second);
}

void MainWindow::setWorldTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QDateTime worldTime;
    int index = ui->worldComboBox->currentIndex();
    if(index == 0){
        QTimeZone newZone("America/Chicago");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 1){
        QTimeZone newZone("America/New_York");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 2){
        QTimeZone newZone("Asia/Tokyo");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 3){
        QTimeZone newZone("Asia/Seoul");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 4){
        QTimeZone newZone("Asia/Bangkok");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 5){
        QTimeZone newZone("Asia/Jerusalem");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 6){
        QTimeZone newZone("Asia/Shanghai");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 7){
        QTimeZone newZone("Africa/Bamako");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 8){
        QTimeZone newZone( "Africa/Dakar");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 9){
        QTimeZone newZone("Europe/Madrid");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 10){
        QTimeZone newZone( "Europe/London");
        worldTime = time.toTimeZone(newZone);
    }else if(index == 11){
        QTimeZone newZone( "Europe/Rome");
        worldTime = time.toTimeZone(newZone);
    }

    QString hour = worldTime.toString("hh");
    QString minute = worldTime.toString("mm");
    QString second = worldTime.toString("ss");

    ui->worldHourLCD->display(hour);
    ui->worldMinuteLCD->display(minute);
    ui->worldSecondLCD->display(second);
}

void MainWindow::processImage(QPixmap *image)
{
    ui->imageLabel->setPixmap(*image);
}

void MainWindow::processWeatherJson(QJsonObject *json)
{
    qDebug() <<"json Ready";
    QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
    QString weatherDesc = json->value("weather").toArray()[0].toObject()["description"].toString();
    double temp = json->value("main").toObject()["temp"].toDouble();
    double temp_min = json->value("main").toObject()["temp_min"].toDouble();
    double temp_max = json->value("main").toObject()["temp_max"].toDouble();
    double humidity = json->value("main").toObject()["humidity"].toDouble();

    setWeahterDisplay(weather);
    ui->weatherLabel->setText("Current Weather: " + weather
                              + "\nDescription: " + weatherDesc + "\n"
                              + "\nTemperature:\n" + QString::number(temp) + "°F"
                              + "\nMinimum Temp:\n" + QString::number(temp_min) + "°F"
                              + "\nMaximum Temp:\n" + QString::number(temp_max) + "°F"
                              + "\nHumidity: " + QString::number(humidity) +"%");
}

void MainWindow::setPhotoDisplay()
{
    if(photoNum > 7){
        photoNum = 1;
    }

    QString imageAddress = "://images/image" + QString::number(photoNum) + ".jpg";
    timerCount++;
    if(timerCount % 10 == 0){
        QPixmap photo(imageAddress);
        ui->photoLabel->setPixmap(photo);
        photoNum++;
    }

}

void MainWindow::setWeahterDisplay(QString weather)
{
    if(weather == "Clear"){
        QPixmap photo("://images/clear.png");
        ui->weatherPhotoLabel->setPixmap(photo);
    }
    if(weather == "Drizzle"){
        QPixmap photo("://images/drizzle.png");
        ui->weatherPhotoLabel->setPixmap(photo);
    }
    if(weather == "Rain"){
        QPixmap photo("://images/rain.png");
        ui->weatherPhotoLabel->setPixmap(photo);
    }
    if(weather == "Snow"){
        QPixmap photo("://images/snow.png");
        ui->weatherPhotoLabel->setPixmap(photo);
    }
    if(weather == "Thunderstorm"){
        QPixmap photo("://images/thunderstorm.png");
        ui->weatherPhotoLabel->setPixmap(photo);
    }
    if(weather == "Clouds"){
        QPixmap photo("://images/cloud.png");
        ui->weatherPhotoLabel->setPixmap(photo);
    }
    if(weather == "Haze"){
        QPixmap photo("://images/haze.png");
        ui->weatherPhotoLabel->setPixmap(photo);
    }
}

void MainWindow::on_imageDownloadButton_clicked()
{
    QString zip = ui->zipCodeEdit->text();
    httpManager->sendImageRequest(zip);
    httpManager->sendWeatherRequest(zip);
}

void MainWindow::on_worldComboBox_currentIndexChanged(int index)
{
    setWorldTime();
}

void MainWindow::on_actionOpen_To_Do_List_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open To-Do List"), "",
                                                    tr("Address Book (*.csv)::All Files (*)"));
    std::cout  << fileName.toStdString() << std::endl;

    myList->openFile(fileName);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}
