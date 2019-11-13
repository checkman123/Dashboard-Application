#include "todolist.h"
#include <QFile>
#include <QMessageBox>
#include <iostream>
#include <QTextStream>

todoList::todoList(QObject *parent)
    :QAbstractTableModel (parent)
{

}

int todoList::rowCount(const QModelIndex &parent) const
{
    return toDo.size();
}

int todoList::columnCount(const QModelIndex &parent) const
{
    return 2;
}

QVariant todoList::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        switch(index.column()) {
        case 0: //todo num
            return toDo.at(index.row());
        case 1:
            return toDoDone.at(index.row());
        }
    }
    return QVariant();
}

void todoList::openFile(QString filePath){

    QFile file(filePath);

    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
        return;
    }
    QTextStream in(&file);

    for(int i = 0; !in.atEnd(); i++) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if(i == 0) continue;

        for(int j = 0; j < fields.length(); j++){
            std::cout << "[" << j << fields[j].toStdString();
        }
        std::cout << std::endl;


        toDo.push_back(fields[0]);
        toDoDone.push_back(fields[1]);
    }

    file.close();

    emit layoutChanged();
}
