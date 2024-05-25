#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readWeapon()
{
    string weapon;
    cout << "Введите оружие героя (древковое, лук, двуручный меч, одноручный меч): ";
    getline(cin, weapon);
    return weapon;
}

#endif