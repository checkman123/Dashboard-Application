/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_To_Do_List;
    QAction *actionExit;
    QWidget *centralWidget;
    QPushButton *imageDownloadButton;
    QLabel *imageLabel;
    QGroupBox *currentGroupBox;
    QLCDNumber *secondLCD;
    QLCDNumber *minuteLCD;
    QLCDNumber *hourLCD;
    QGroupBox *worldGroupBox;
    QLCDNumber *worldSecondLCD;
    QLCDNumber *worldMinuteLCD;
    QLCDNumber *worldHourLCD;
    QComboBox *worldComboBox;
    QLabel *weatherLabel_2;
    QLineEdit *zipCodeEdit;
    QLabel *weatherLabel;
    QGroupBox *groupBox;
    QTableView *tableView;
    QLabel *greetLabel;
    QLabel *weatherPhotoLabel;
    QLabel *photoLabel;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(903, 911);
        actionOpen_To_Do_List = new QAction(MainWindow);
        actionOpen_To_Do_List->setObjectName(QString::fromUtf8("actionOpen_To_Do_List"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        imageDownloadButton = new QPushButton(centralWidget);
        imageDownloadButton->setObjectName(QString::fromUtf8("imageDownloadButton"));
        imageDownloadButton->setGeometry(QRect(610, 530, 281, 51));
        QFont font;
        font.setPointSize(12);
        imageDownloadButton->setFont(font);
        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(10, 590, 431, 251));
        imageLabel->setFrameShape(QFrame::Box);
        currentGroupBox = new QGroupBox(centralWidget);
        currentGroupBox->setObjectName(QString::fromUtf8("currentGroupBox"));
        currentGroupBox->setGeometry(QRect(310, 340, 291, 181));
        currentGroupBox->setFont(font);
        currentGroupBox->setStyleSheet(QString::fromUtf8("color:rgb(0, 178, 135);\n"
"background-color:rgb(2,2,2);"));
        secondLCD = new QLCDNumber(currentGroupBox);
        secondLCD->setObjectName(QString::fromUtf8("secondLCD"));
        secondLCD->setGeometry(QRect(170, 140, 111, 31));
        secondLCD->setStyleSheet(QString::fromUtf8(""));
        secondLCD->setDigitCount(2);
        secondLCD->setSegmentStyle(QLCDNumber::Flat);
        secondLCD->setProperty("value", QVariant(22.000000000000000));
        secondLCD->setProperty("intValue", QVariant(22));
        minuteLCD = new QLCDNumber(currentGroupBox);
        minuteLCD->setObjectName(QString::fromUtf8("minuteLCD"));
        minuteLCD->setGeometry(QRect(170, 20, 111, 111));
        minuteLCD->setStyleSheet(QString::fromUtf8(""));
        minuteLCD->setDigitCount(2);
        minuteLCD->setSegmentStyle(QLCDNumber::Flat);
        minuteLCD->setProperty("value", QVariant(22.000000000000000));
        minuteLCD->setProperty("intValue", QVariant(22));
        hourLCD = new QLCDNumber(currentGroupBox);
        hourLCD->setObjectName(QString::fromUtf8("hourLCD"));
        hourLCD->setGeometry(QRect(10, 20, 151, 151));
        hourLCD->setStyleSheet(QString::fromUtf8(""));
        hourLCD->setDigitCount(2);
        hourLCD->setSegmentStyle(QLCDNumber::Flat);
        hourLCD->setProperty("value", QVariant(22.000000000000000));
        hourLCD->setProperty("intValue", QVariant(22));
        worldGroupBox = new QGroupBox(centralWidget);
        worldGroupBox->setObjectName(QString::fromUtf8("worldGroupBox"));
        worldGroupBox->setGeometry(QRect(10, 340, 291, 241));
        worldGroupBox->setFont(font);
        worldGroupBox->setStyleSheet(QString::fromUtf8("color:rgb(0, 178, 135);\n"
"background-color:rgb(2,2,2);"));
        worldSecondLCD = new QLCDNumber(worldGroupBox);
        worldSecondLCD->setObjectName(QString::fromUtf8("worldSecondLCD"));
        worldSecondLCD->setGeometry(QRect(170, 140, 111, 31));
        worldSecondLCD->setStyleSheet(QString::fromUtf8(""));
        worldSecondLCD->setDigitCount(2);
        worldSecondLCD->setSegmentStyle(QLCDNumber::Flat);
        worldSecondLCD->setProperty("value", QVariant(22.000000000000000));
        worldSecondLCD->setProperty("intValue", QVariant(22));
        worldMinuteLCD = new QLCDNumber(worldGroupBox);
        worldMinuteLCD->setObjectName(QString::fromUtf8("worldMinuteLCD"));
        worldMinuteLCD->setGeometry(QRect(170, 20, 111, 111));
        worldMinuteLCD->setStyleSheet(QString::fromUtf8(""));
        worldMinuteLCD->setDigitCount(2);
        worldMinuteLCD->setSegmentStyle(QLCDNumber::Flat);
        worldMinuteLCD->setProperty("value", QVariant(22.000000000000000));
        worldMinuteLCD->setProperty("intValue", QVariant(22));
        worldHourLCD = new QLCDNumber(worldGroupBox);
        worldHourLCD->setObjectName(QString::fromUtf8("worldHourLCD"));
        worldHourLCD->setGeometry(QRect(10, 20, 151, 141));
        worldHourLCD->setStyleSheet(QString::fromUtf8(""));
        worldHourLCD->setDigitCount(2);
        worldHourLCD->setSegmentStyle(QLCDNumber::Flat);
        worldHourLCD->setProperty("value", QVariant(22.000000000000000));
        worldHourLCD->setProperty("intValue", QVariant(22));
        worldComboBox = new QComboBox(worldGroupBox);
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->setObjectName(QString::fromUtf8("worldComboBox"));
        worldComboBox->setGeometry(QRect(10, 190, 271, 41));
        QFont font1;
        font1.setPointSize(14);
        worldComboBox->setFont(font1);
        worldComboBox->setStyleSheet(QString::fromUtf8(""));
        worldComboBox->setInsertPolicy(QComboBox::InsertAtBottom);
        weatherLabel_2 = new QLabel(worldGroupBox);
        weatherLabel_2->setObjectName(QString::fromUtf8("weatherLabel_2"));
        weatherLabel_2->setGeometry(QRect(0, 180, 291, 61));
        weatherLabel_2->setFont(font);
        weatherLabel_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        weatherLabel_2->setFrameShape(QFrame::Box);
        weatherLabel_2->setWordWrap(true);
        weatherLabel_2->raise();
        worldSecondLCD->raise();
        worldMinuteLCD->raise();
        worldHourLCD->raise();
        worldComboBox->raise();
        zipCodeEdit = new QLineEdit(centralWidget);
        zipCodeEdit->setObjectName(QString::fromUtf8("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(310, 530, 291, 51));
        zipCodeEdit->setFont(font1);
        zipCodeEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgb(220, 220, 220)"));
        zipCodeEdit->setAlignment(Qt::AlignCenter);
        weatherLabel = new QLabel(centralWidget);
        weatherLabel->setObjectName(QString::fromUtf8("weatherLabel"));
        weatherLabel->setGeometry(QRect(450, 590, 151, 251));
        weatherLabel->setFont(font);
        weatherLabel->setStyleSheet(QString::fromUtf8("color:rgb(0, 178, 135)"));
        weatherLabel->setFrameShape(QFrame::Box);
        weatherLabel->setWordWrap(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(610, 10, 281, 511));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color:rgb(0, 178, 135);"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 261, 481));
        QFont font2;
        font2.setPointSize(10);
        tableView->setFont(font2);
        tableView->setStyleSheet(QString::fromUtf8("color:rgb(226, 226, 226);\n"
"background-color:rgb(34, 34, 34);"));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        greetLabel = new QLabel(centralWidget);
        greetLabel->setObjectName(QString::fromUtf8("greetLabel"));
        greetLabel->setGeometry(QRect(10, 0, 591, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Poor Richard"));
        font3.setPointSize(48);
        greetLabel->setFont(font3);
        greetLabel->setStyleSheet(QString::fromUtf8("color:rgb(0, 178, 135)"));
        greetLabel->setAlignment(Qt::AlignCenter);
        weatherPhotoLabel = new QLabel(centralWidget);
        weatherPhotoLabel->setObjectName(QString::fromUtf8("weatherPhotoLabel"));
        weatherPhotoLabel->setGeometry(QRect(610, 590, 281, 251));
        weatherPhotoLabel->setStyleSheet(QString::fromUtf8(""));
        weatherPhotoLabel->setFrameShape(QFrame::Box);
        photoLabel = new QLabel(centralWidget);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));
        photoLabel->setGeometry(QRect(10, 80, 591, 251));
        photoLabel->setStyleSheet(QString::fromUtf8("background-image: url(://images/image1.jpg);"));
        photoLabel->setFrameShape(QFrame::Box);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 901, 871));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(2,2,2);"));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        imageDownloadButton->raise();
        imageLabel->raise();
        currentGroupBox->raise();
        worldGroupBox->raise();
        zipCodeEdit->raise();
        weatherLabel->raise();
        groupBox->raise();
        greetLabel->raise();
        weatherPhotoLabel->raise();
        photoLabel->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 903, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionOpen_To_Do_List);
        menuMenu->addSeparator();
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_To_Do_List->setText(QApplication::translate("MainWindow", "Open To-Do List", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        imageDownloadButton->setText(QApplication::translate("MainWindow", "Image/Weather Display", nullptr));
        imageLabel->setText(QString());
        currentGroupBox->setTitle(QApplication::translate("MainWindow", "Current Time", nullptr));
        worldGroupBox->setTitle(QApplication::translate("MainWindow", "World Clock", nullptr));
        worldComboBox->setItemText(0, QApplication::translate("MainWindow", "America, Chicago", nullptr));
        worldComboBox->setItemText(1, QApplication::translate("MainWindow", "America, New York", nullptr));
        worldComboBox->setItemText(2, QApplication::translate("MainWindow", "Japan, Tokyo", nullptr));
        worldComboBox->setItemText(3, QApplication::translate("MainWindow", "Korea, Seoul", nullptr));
        worldComboBox->setItemText(4, QApplication::translate("MainWindow", "Thailand, Bangkok", nullptr));
        worldComboBox->setItemText(5, QApplication::translate("MainWindow", "Israel, Jerusalem", nullptr));
        worldComboBox->setItemText(6, QApplication::translate("MainWindow", "China, Shanghai", nullptr));
        worldComboBox->setItemText(7, QApplication::translate("MainWindow", "Mali, Bamako", nullptr));
        worldComboBox->setItemText(8, QApplication::translate("MainWindow", "Senegal, Dakar", nullptr));
        worldComboBox->setItemText(9, QApplication::translate("MainWindow", "Spain, Madrid", nullptr));
        worldComboBox->setItemText(10, QApplication::translate("MainWindow", "England, London", nullptr));
        worldComboBox->setItemText(11, QApplication::translate("MainWindow", "Italy, Rome", nullptr));

        weatherLabel_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        zipCodeEdit->setToolTip(QApplication::translate("MainWindow", "Please enter ZIP code", nullptr));
#endif // QT_NO_TOOLTIP
        zipCodeEdit->setText(QApplication::translate("MainWindow", "98119", nullptr));
        weatherLabel->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "To-Do List", nullptr));
        greetLabel->setText(QString());
        weatherPhotoLabel->setText(QString());
        photoLabel->setText(QString());
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
