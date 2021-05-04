#include "character.h"

void Character::print()
{
    std::cout << "Name: " << _name << std::endl;
    std::cout << "STR: " << _str << std::endl;
    std::cout << "DEX: " << _dex << std::endl;
    std::cout << "CON: " << _con << std::endl;
    std::cout << "INT: " << _int << std::endl;
    std::cout << "WIS: " << _wis << std::endl;
    std::cout << "CHA: " << _cha << std::endl;
}


PC::PC(std::string name, Race init_race, Class init_class) :
        Character(std::move(name)), _race(init_race), _class(init_class)
{
    switch(_race)
    {
        case DWARF:
        {
            Dwarf::create(this);
        }
    }

}

void PC::set_stats(STAT *init_stats)
{
    /*
     * Input: array of 6 enum STAT type ranked in order from high to low
     */
    int score = 15;
    for(int i = 0; i < 6; i++)
    {
        *(stats[init_stats[i]]) += score--;
        if(i > 2)
            score--;
    }
}

