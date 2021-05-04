#include <iostream>
#include "character.h"
#include "race.h"
#include "job.h"
/* unit test for character creation */ 

int main()
{
    bool quit = false;
    std::string in; 
    int choice; 
    
    std::cout <<"character creation menu" << std::endl;

    while(!quit)
    {
	std::cout << "(1) Dwarf\n(2) Quit" << std::endl;

	std::cin >> in;
	choice = std::stoi(in);
	Race init_race;
	Class init_class = FIGHTER;

	switch(choice)
	{
	case 1:
	{
	    init_race = DWARF;
	    break;
	}
	case 2:
	    quit = true;
	    break; 
	default:
	    std::cout << "not valid" << std::endl;
	}
	PC *pc = new PC("brueger", init_race, init_class);
	pc->print();

	

	
	
    }
        
    return 0; 
}
