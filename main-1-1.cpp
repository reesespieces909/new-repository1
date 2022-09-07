#include <iostream>
#include "Cage.h"

using namespace std;

int main()
{
//Cage object
Cage obj1(1001, "Parrot");

//Printing result
cout << "\nOccupant ID: " << obj1.get_id_number();
cout << "\nOccupant Name: " << obj1.get_name() << "\n\n";

return 0;
}

