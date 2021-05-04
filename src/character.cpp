#include "character.h"

void Character::print()
{
    std::cout <<"Name: " << name << std::endl;
    std::cout << "STR: " << str << std::endl;
    std::cout << "DEX: " << dex << std::endl;
    std::cout << "CON: " << con << std::endl;
    std::cout << "WIS: " << wis << std::endl;
    std::cout << "CHA: " << cha << std::endl;
}

Dwarf::Dwarf(const std::string &name) : Character(name)
{
    con += 2;
}
