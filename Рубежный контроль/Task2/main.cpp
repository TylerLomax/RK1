#include<iostream>
#include<mainwindow.h>


void test_TenToTwo(int decimal, bool young_first_old_last) {
    QDir dir;
    dir.cdUp();
    dir.cd("Task2");
    TenToTwo obj;
    obj.convert(decimal, young_first_old_last, dir).toStdString();
}
