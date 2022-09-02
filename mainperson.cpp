#include "Person.h"

int main()

{



Person p1("Barry", 90000);

Person p2("Jim", 120000);

Person p3("Lachlan", 100000);

Person p4("Ben", 70000);




cout << p1.toString() << endl;

cout << p2.toString() << endl;

cout << p3.toString() << endl;

cout << p4.toString() << endl << endl;

cout << "Changing name and salary" << endl;

p1.setName("Braden");

p1.setSalary(50000);

p2.setName("Harry");

p2.setSalary(85000);

p3.setName("James");

p3.setSalary(95000);

p4.setName("Lauren");

p4.setSalary(65000);


cout << p1.toString() << endl;
cout << p2.toString() << endl;
cout << p3.toString() << endl;

cout << p4.toString() << endl << endl;

return 0;

}