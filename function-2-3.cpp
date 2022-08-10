#include <iostream>

using namespace std;
int palindrome_sum(int integers[],int length);
int sum_integers(int integers[],int length);
bool is_array_palindrome(int integers[],int length);
int palindrome_sum(int integers[],int length){
if(length>0){
if(is_array_palindrome(integers,length)){
int t=sum_integers(integers,length);
return t; 
} 
else{
return -2; 
}
}
else{
return -1; 
}
}
int sum_integers(int integers[],int length){
int sum=0;
for(int i=0;i<length;i++){
sum=sum+integers[i]; 
}
return sum; 
}

bool is_array_palindrome(int integers[],int length){
if(length>0){
int pal=0;
for(int i=0,j=length-1;i<length,j>=0;i++,j--){
if(integers[i]!=integers[j]){
pal++;
break;
}
}
if(pal==0){
return true; 
}else{
return false; 
} 
}
else{
return false; 
}
}