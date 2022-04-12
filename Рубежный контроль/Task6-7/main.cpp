
#include <iostream>
#include "mainwindow.h"
#include <QApplication>



void test_List() {
    List lst;
    lst.print(false);
    Data data(1);
    lst.push_front(data);
    data.setNumber(10);
    lst.push_front(data);
    data.setNumber(135);
    lst.push_back(data);
    data.setNumber(11);
    lst.insert(data, 1);
    lst.print(false);
    QDir dir;
    dir.cdUp();
    dir.cd("untitled3");
    lst.print_to_file(dir, false);
}
