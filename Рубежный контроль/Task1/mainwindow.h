#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QMap>
#include <QString>
#include <QDir>

class CharFrequency
{
private:
    QFile* file;
    QString* data;
    QMap<char, int>* map;
    void collect_data(QString str);
    void print_data(QDir file_path);
public:
    CharFrequency();
    void read_file(QDir file_path);
    ~CharFrequency();
};

#endif // MAINWINDOW_H
