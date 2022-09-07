#include<iostream>
#include "Cage.h"

using namespace std;

//Default Constructor
Cage::Cage()
{
occupantName = "";
IDNumber = 0;
}

//Argument Constructor
Cage::Cage(int newNumber, string newName)
{
occupantName = newName;
IDNumber = newNumber;
}

//Getter methods
string Cage::get_name()
{
return occupantName;
}

int Cage::get_id_number()
{
return IDNumber;
}

//Destructor
Cage::~Cage()
{
cout << "\nDestructor\n";
}