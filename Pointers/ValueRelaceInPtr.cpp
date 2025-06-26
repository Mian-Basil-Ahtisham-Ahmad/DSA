#include<iostream>
using namespace std; 

int main(){
    int x= 18;
    float y= 7.9;
    int *ptr=&x;
    cout<<"Address stored inside ptr :"<<ptr<<endl;
    cout<<"Value present at the address stored in ptr :"<<*ptr<<endl;
float *ptrf = &y;
   cout<<"Address stored inside ptrf :"<<ptrf<<endl;
    cout<<"Value present at the address stored in ptrf :"<<*ptrf<<endl;
     x= 23;
     cout<<endl<<endl;
     cout<<"New updated value of x is :"<<x<<endl;
     cout<<"ptr still pointing to same memory which has 23 instead of 18 - "<<*ptr<<endl;
    cout<<"ptr is"<<ptr<<endl; 
    cout<<"*ptr is"<<*ptr<<endl; 
    cout<<"&x is"<<&x<<endl; 
    cout<<"x is"<<x<<endl; 
    //Updating x with pointer

    *ptr=50;
    cout<<"New value of x "<<x<<endl;
    cout<<"New value pointed by ptr is "<<*ptr<<endl;
    cout<<"New value address pointed by ptr is "<<ptr<<endl;


int valueAtX=*ptr;
cout<<valueAtX<<endl;
return 0;
} 