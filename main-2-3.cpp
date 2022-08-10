#include <iostream>

using namespace std;

int main(){
    extern int palindrome_sum(int integers[],int length);
extern int sum_integers(int integers[],int length);
extern bool is_array_palindrome(int integers[],int length);

int l=5; 
int array[]={1,2,3,2,1}; 
int returnedValue=palindrome_sum(array,l); 
if(returnedValue==-2) 
{
cout<<"The array is not a palindrome";
}
else if(returnedValue==-1){ 
cout<<"The length of array is less than 1";
}
else{ 
cout<<"The array is a palindrome\n";
cout<<"Sum of elements in the array : "<<returnedValue;
}

return 0;
}