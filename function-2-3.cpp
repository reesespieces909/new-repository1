#include <iostream>

using namespace std;
int palindrome_sum(int integers[],int length);
int sum_integers(int integers[],int length);
bool is_array_palindrome(int integers[],int length);
int palindrome_sum(int integers[],int length){
if(length>0){
if(is_array_palindrome(integers,length)){
int s=sum_integers(integers,length);
return s; //return sum of elements
} 
else{
return -2; //return -2 if is_a_palindrome returned value is false
}
}
else{
return -1; //return -1 if length is less than 1
}
}
int sum_integers(int integers[],int length){
int sum=0;
for(int i=0;i<length;i++){
sum=sum+integers[i]; //add elements in sum variable
}
return sum; //return sum
}

bool is_array_palindrome(int integers[],int length){
if(length>0){
int flag=0;
for(int i=0,j=length-1;i<length,j>=0;i++,j--){
if(integers[i]!=integers[j]){
flag++;
break;
}
}
if(flag==0){
return true; //return true if flag==0 means palindrome
}else{
return false; //return false if flag not equal 0 
} 
}
else{
return false; //return false if length is less than 1
}
}