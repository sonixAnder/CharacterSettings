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
    cout << "������� ������ ����� (�����, ����, �����, ����, ������): ";
    getline(cin, element);
    return element;
}

#endif