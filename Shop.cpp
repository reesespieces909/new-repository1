#include <iostream>
using namespace std;
#include "Shop.h"


Employee:: Employee (int payRate){
   
}
int Employee::get_payRate()
{
    return payRate;
}
void Employee::set_payRate(int payRate)
{
    payRate = payRate;
}

float Employee::get_energyLevel()
{
    return energyLevel;
}
void Employee::set_energyLevel(float energyLevel)
{
    energyLevel = energyLevel + 0.02;
}