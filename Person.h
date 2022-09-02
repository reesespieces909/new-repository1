#include <iostream>

#include <sstream>

using namespace std;

class Person

{

private:

string myName;

int salary;

public:

Person(string, int);

void setName(string);

string getName();

void setSalary(int);

int getSalary();

string toString();

};