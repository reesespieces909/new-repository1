#include "Employee.h"

Employee:: Employee (int payRate){
   
void Employee::set_payRate(int payRate)

    payRate = payRate;
}
int Employee::get_payRate()
{
    return payRate;
}

void Employee::set_energyLevel(float energyLevel)
{
    energyLevel = energyLevel + 0.02;
}
float Employee::get_energyLevel()
{
    return energyLevel;
}

