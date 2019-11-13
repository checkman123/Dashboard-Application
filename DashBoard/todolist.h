#ifndef TODOLIST_H
#define TODOLIST_H

#include <QAbstractTableModel>
#include <vector>
class todoList: public QAbstractTableModel
{
public:
    todoList(QObject *parent);
    std::vector<QString> toDoNumber;
    std::vector<QString> toDo;
    std::vector<QString> toDoDone;



public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

    void openFile(QString filePath);
    QString gettoDoNumber(int index);

    void reset();

    QString number;
};

#endif // TODOLIST_H
