#include <iostream>

using namespace std;

int main(){
    extern int next_match_count(int vals[], int length);
    int vals[]={1,2,2,2,3,1,1,5,2,2};  
    int vals_length=10;  
    
    
    
    cout<<"Number of Matches: "<<next_match_count(vals,vals_length)<<endl;
}