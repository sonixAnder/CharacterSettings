#pragma once
#ifndef ABILITY_H
#define ABILITY_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readAbility()
{
    string ability;
    cout << "������� ����������� ����� (�����������, �������� � �.�.): ";
    getline(cin, ability);
    return ability;
}

#endif