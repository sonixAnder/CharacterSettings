#pragma once
#ifndef HEIGHT_H
#define HEIGHT_H

#include <iostream>
#include <fstream>
using namespace std;

double readHeight()
{
    double height;
    cout << "Введите рост героя: ";
    cin >> height;
    cin.ignore(); // Очищаем буфер ввода
    return height;
}

#endif