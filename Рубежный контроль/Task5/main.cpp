#include<iostream>
#include "mainwindow.h"
#include <QApplication>

void test_DoubleArrayMean() {
    uint rows = 10;
    uint* cols = new uint[rows];
    for (uint i = 0; i < rows; i++)
        cols[i] = 10;

    DoubleArray obj = DoubleArray(rows, cols, false);

    // fill
    for (uint i = 0; i < rows; i++)
        for (uint j = 0; j < cols[i]; j++)
            obj(i, j) = i + j;
    // print
    for (uint i = 0; i < rows; i++) {
        for (uint j = 0; j < cols[i]; j++)
            std::cout << obj(i, j) << ' ';
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // print means
    QList<int> lst = obj.get_means();
    for (uint i = 0; i < lst.size(); i++)
        std::cout << lst[i] << ' ';
    std::cout << std::endl;
}
