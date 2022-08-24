#include<iostream>
#include <string>

using namespace std;

int main(){
    extern string month_lookup(int month);
    cout<< month_lookup(3) << endl;
    cout<< month_lookup(4) << endl;
    cout<< month_lookup(22) << endl;
    cout<< month_lookup(-9) << endl;
    
    
    return 0;
}