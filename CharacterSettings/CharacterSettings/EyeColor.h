#pragma once
#ifndef EYECOLOR_H
#define EYECOLOR_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readEyeColor()
{
    string eyeColor;
    cout << "������� ���� ���� �����: ";
    getline(cin, eyeColor);
    return eyeColor;
}

#endif