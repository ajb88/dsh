#ifndef DSH_CHAR_H
#define DSH_CHAR_H

#include <string>
#include <iostream>
#include <utility>
#include <map>
#include "race.h"
#include "job.h"

#define BUFF 1024


enum Race
{
    DWARF
};


class Character
{
public:
    const std::string _name;
    int _hp, _ac, _speed;
    int _str, _dex, _con, _wis, _cha;

    explicit Character(std::string  name): _hp(0), _ac(0), _speed
    (0), _str(0), _dex(0), _con(0), _wis(0), _cha(0), _name(std::move(name))
				 {};
    void print(); 
   
};

class PC : public Character
{
protected:

    const Race _race;
    const Class _class;
public:
    explicit PC(std::string name, Race init_race, Class init_class);

};

#endif
