// Clinic.h
#ifndef CLINIC_H
#define CLINIC_H

#include "Cage.h"
#include <iostream>

class Clinic
{
    public:
        Clinic(); // a default constructor
        Clinic(int max_size, std::string name);  // a constructor with Clinic size and Clinic name
        int get_current_number_of_cages();
        std::string get_name();                // returns the clinics's name
        Cage* get_cages();        // returns the array of cages currently in the clinic
        // returns true and adds new cage to the clinic if the clinic is not full
        // otherwise returns false
        bool add_cage(Cage new_cage);
        ~Clinic(); // destructor
    private:
        int numCages;
        int max_size;
        std::string name;
        Cage* cages;
};

#endif /* CLINIC_H */