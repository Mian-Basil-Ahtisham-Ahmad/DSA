#include<iostream>
using namespace std; 
int add(int , int );
int main(){
    int a=5; 
   int b=4; 
   float c=3.4;
   float d=4.6;
   cout<<add(a,b)<<endl;
return 0;
}
int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}