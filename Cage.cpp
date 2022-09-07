#include "Cage.h"

// a default constructor ID number is zero and occupant name is an empty string ""
Cage :: Cage(){
    id = 0;
    occupant = "";
}
 // a constructor that takes the ID number and occupant name
Cage :: Cage(int newNumber, std::string newName){
    id = newNumber;
    occupant = newName;
}
// returns the name of the cage occupant
std::string Cage ::  get_name(){
    return occupant;
}
// returns the cage's ID number
int Cage :: get_ID_number(){
    return id;
}
// destructor
Cage :: ~Cage(){
    
}