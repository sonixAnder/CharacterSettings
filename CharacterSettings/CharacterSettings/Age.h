#pragma once
#ifndef AGE_H
#define AGE_H

#include <iostream>
#include <fstream>
using namespace std;

int readAge()
{
    int age;
    cout << "������� ������� �����: ";
    cin >> age;
    cin.ignore(); // ������� ����� �����
    return age;
}

#endif