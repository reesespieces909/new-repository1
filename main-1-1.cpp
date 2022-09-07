#include "Cage.h"
#include <iostream>
using namespace std;

int main()
{
    // create an instance of Cage instance
    Cage cage(100, "cages");
    // display cage details
    std::cout << "Occupant name: " << cage.get_name() << std::endl;
    std::cout << "ID Number: " << cage.get_ID_number() << std::endl;
    return 0;
}

