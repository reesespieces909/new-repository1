#include<string>
#include <iostream>
using namespace std;


string month_lookup(int month)
{
    
    string months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep",
                    "Oct","Nov","Dec"};
                
    string result;  
    
    if(month<1 || month>12)     
        result="invalid month";
    else                        
        result = months[month-1];
        
    return result;      
}


