#include <iostream>
using namespace std;

class Employee
{
    
protected:
    
Employee(int payRate)    // creates a Employee with payRate

int payRate // hourly payRate
float energyLevel   // Initially 100%

void takeABreak(int mins);
public:
    Employee() {}
    int get_payRate();
    void set_payRate(int payRate);
    float get_energyLevel();
    void set_energyLevel(float energyLevel);
    
    
     virtual void work(int mins) = 0;
virtual float pay()= 0
};