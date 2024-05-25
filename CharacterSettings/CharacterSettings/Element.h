#pragma once
#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readElement()
{
    string element;
    cout << "Введите стихию героя (гидро, пиро, анэмо, крио, дэндро): ";
    getline(cin, element);
    return element;
}

#endif