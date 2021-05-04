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
	Race init_race = DWARF;
	Class init_class = FIGHTER;

	PC *pc = new PC("brueger", init_race, init_class);
	STAT stats[] = {STR, CON, WIS, CHA, DEX, INT};
	pc->set_stats(stats);



    pc->print();

        
    return 0; 
}
