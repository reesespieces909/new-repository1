#include <iostream>

using namespace std;

int main(){
    extern int palindrome_sum(int integers[],int length);
extern int sum_integers(int integers[],int length);
extern bool is_array_palindrome(int integers[],int length);

int l=5; //pass length
int arr[]={1,2,3,2,1}; //pass elements
int returnedValue=palindrome_sum(arr,l); //call function
if(returnedValue==-2) //if value==-2
{
cout<<"The array is not palindrome";
}
else if(returnedValue==-1){ //if value==-1
cout<<"The length of array is less than 1";
}
else{ //otherwise
cout<<"The array is palindrome\n";
cout<<"The sum of elements of array : "<<returnedValue;
}

return 0;
}