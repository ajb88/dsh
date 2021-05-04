#ifndef CHAR_H
#define CHAR_H

#include <string>
#include <iostream>
#include <utility>

#define BUFF 1024

class Character
{
protected:
    const std::string name; 
    int hp, ac, speed;
    int str, dex, con, wis, cha;
    int exp, lvl;
public:

    explicit Character(std::string  name): hp(0), ac(0), speed(0),
		  str(0), dex(0), con(0), wis(0), cha(0),
				 exp(0), lvl(1), name(std::move(name)){};
    void print(); 
   
};

class Dwarf : public Character
{
public:
    explicit Dwarf(const std::string &name);

};
#endif
