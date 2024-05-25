#pragma once
#ifndef HERO_H
#define HERO_H

#include <string>
#include "Skill.h"
using namespace std;

class Hero
{
public:
    string name;
    int age;
    double height;
    string eyeColor;
    string ability;
    string element;
    string weapon;
    Skill skill1;
    Skill skill2;
};

#endif