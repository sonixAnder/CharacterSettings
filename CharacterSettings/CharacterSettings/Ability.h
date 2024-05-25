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
    cout << "Введите способность героя (невидимость, скорость и т.д.): ";
    getline(cin, ability);
    return ability;
}

#endif