#include <iostream>

using namespace std;

int main(){
int array[30] = {0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1}; 
extern int binary_to_int(int binary_digits[], int number_of_digits);
binary_to_int(array,30);
cout << "" << endl;

}