#pragma once
#ifndef HEIGHT_H
#define HEIGHT_H

#include <iostream>
#include <fstream>
using namespace std;

double readHeight()
{
    double height;
    cout << "������� ���� �����: ";
    cin >> height;
    cin.ignore(); // ������� ����� �����
    return height;
}

#endif