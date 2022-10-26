#include <iostream>
using namespace std;

class Casual
{
    
protected:
    
Casual(int payRate)    // creates a Employee with payRate

              // Create a Casual with a payRate
  
float hoursWorked[7]                       
int dayCount                       

void endWorkDay();

void takeABreak(int mins);
public:
    Employee() {}
    int get_payRate();
    void set_payRate(int payRate);
    float get_energyLevel();
    void set_energyLevel(float energyLevel);
    
    
     virtual void work(int mins) = 0;
virtual float pay()= 0;
};