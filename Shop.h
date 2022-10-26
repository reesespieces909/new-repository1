#include <iostream>
using namespace std;

class Shop
{
    
protected:
    
Shop()                          
/* Creates a Shop containing pointers to 5 Employee objects as an array; 
   These Employee objects could be either Managers or Casuals, and in any order
*/
Employee** employees
int count

void addEmployee(Employee *employee)   // Adds a employee to the Shop
Employee **get_employees()             // Returns the array of pointers to the five employee objects
int get_count()                        // Returns the amount of employees added to the shop

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
