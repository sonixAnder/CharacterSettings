#pragma once
#ifndef NAME_H
#define NAME_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readName()
{
    string name;
    cout << "������� ��� �����: ";
    getline(cin, name);
    return name;
}

#endif