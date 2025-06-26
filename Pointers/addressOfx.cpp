#include<iostream>
using namespace std; 

int main(){
    int x= 18;
    float y= 7.9;
int *ptr=&x;
cout<<ptr;

float *ptrf=&y;
cout<<ptrf<<endl;
return 0;
}