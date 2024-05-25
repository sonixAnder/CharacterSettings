#pragma once
#ifndef AGE_H
#define AGE_H

#include <iostream>
#include <fstream>
using namespace std;

int readAge()
{
    int age;
    cout << "Введите возраст героя: ";
    cin >> age;
    cin.ignore(); // Очищаем буфер ввода
    return age;
}

#endif