#include <iostream> 
using namespace std;
int next_match_count(int vals[], int vals_length){
    
    int count = 0;
    for(int i=1; i<vals_length; i++){   
        if(vals[i] == vals[i-1])
           ++count;
    }
    
    return count;
}