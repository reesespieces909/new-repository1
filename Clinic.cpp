#include "Clinic.h"


// a default constructor
Clinic :: Clinic(){
    max_size = 0;
    numCages = 0;
    name = "";
    cages = new Cage();
}
// a constructor with Clinic size and Clinic name
Clinic::Clinic(int new_max_size, std::string name){
    max_size = new_max_size;
    this->name = name;
    cages = new Cage[new_max_size];
    numCages = 0;
}
 // returns the name of the clinic
std::string Clinic::get_name(){
    return name;
}
int Clinic::get_current_number_of_cages(){
    return numCages;
}
// returns the array of cages currently in the clinic
Cage* Clinic::get_cages(){
    return cages;
}     
// returns true and adds new cage to the clinic if the clinic is not full
// otherwise returns false
bool Clinic::add_cage(Cage new_cage){
    if(numCages <= max_size){
        cages[numCages] = new_cage;
        numCages+=1;
        return true;
    }
    return false;
}
// destructor
Clinic :: ~Clinic(){
}