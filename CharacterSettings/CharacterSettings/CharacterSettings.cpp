#include <iostream>
#include <fstream>
#include <string>

#include "Hero.h"
#include "Name.h"
#include "Age.h"
#include "Height.h"
#include "EyeColor.h"
#include "Ability.h"
#include "Element.h"
#include "Weapon.h"
#include "Skill.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Hero myHero;

    myHero.name = readName();
    myHero.age = readAge();
    myHero.height = readHeight();
    myHero.eyeColor = readEyeColor();
    myHero.ability = readAbility();
    myHero.element = readElement();
    myHero.weapon = readWeapon();

    cout << "Введите название первой способности: ";
    getline(cin, myHero.skill1.name);
    cout << "Введите стоимость энергии для первой способности: ";
    cin >> myHero.skill1.energyCost;
    cin.ignore();

    cout << "Введите название второй способности: ";
    getline(cin, myHero.skill2.name);
    cout << "Введите стоимость энергии для второй способности: ";
    cin >> myHero.skill2.energyCost;
    cin.ignore();

    ofstream file("hero_info.txt");
    if (file.is_open())
    {
        file << "Имя: " << myHero.name << endl;
        file << "Возраст: " << myHero.age << endl;
        file << "Рост: " << myHero.height << endl;
        file << "Цвет глаз: " << myHero.eyeColor << endl;
        file << "Способность: " << myHero.ability << endl;
        file << "Стихия: " << myHero.element << endl;
        file << "Оружие: " << myHero.weapon << endl;
        file << "Первая способность: " << myHero.skill1.name << " (Стоимость: " << myHero.skill1.energyCost << ")" << endl;
        file << "Вторая способность: " << myHero.skill2.name << " (Стоимость: " << myHero.skill2.energyCost << ")" << endl;
        file.close();
        cout << "Информация о герое записана в файл hero_info.txt" << endl;
    }
    else
    {
        cout << "Ошибка открытия файла!" << endl;
    }

    string question;
    cout << "Задайте вопрос про героя: ";
    getline(cin, question);

    cout << "Ответ: " << endl;
    cout << "Имя: " << myHero.name << endl;
    cout << "Возраст: " << myHero.age << endl;
    cout << "Рост: " << myHero.height << endl;
    cout << "Цвет глаз: " << myHero.eyeColor << endl;
    cout << "Способность: " << myHero.ability << endl;
    cout << "Стихия: " << myHero.element << endl;
    cout << "Оружие: " << myHero.weapon << endl;
    cout << "Первая способность: " << myHero.skill1.name << " (Стоимость: " << myHero.skill1.energyCost << ")" << endl;
    cout << "Вторая способность: " << myHero.skill2.name << " (Стоимость: " << myHero.skill2.energyCost << ")" << endl;

    return 0;
}