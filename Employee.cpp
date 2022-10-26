#include "Employee.h"
int Employee::get_payRate()
{
    return this->PayRate;
}
void Employee::set_payRate(int payRate)
{
    this->payRate = payRate;
}

float Employee::get_energyLevel()
{
    return this->energyLevel;
}
void Employee::set_energyLevel(float energyLevel)
{
    this->energyLevel = energyLevel;
}
