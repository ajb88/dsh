#include <iostream>
#include "character.h"

/* unit test for character creation */ 

int main(void)
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

	switch(choice)
	{
	case 1:
	{
	    std::cout << "dwarf()\n";
	    auto *pc = new Dwarf("bruenor");
	    pc->print(); 
      	    break;
	}
	case 2:
	    quit = true;
	    break; 
	default:
	    std::cout << "not valid" << std::endl;
	}

	

	
	
    }
        
    return 0; 
}
