#include <iostream>

using namespace std;

int main(){
extern int bin_to_int(int binary_digits[],int number_of_digits);


    int array[30] = {1, 0, 1, 0, 0};
    cout << bin_to_int(array, 5) << endl;
    return ;
}
