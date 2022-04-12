#include <iostream>

#include "mainwindow.h"


void test_CharFrequency(QString file_name) {
    QDir dir;
    dir.cdUp();
    dir.cd("RK1");
    CharFrequency cf;
    cf.read_file(dir.absoluteFilePath(file_name));
}
