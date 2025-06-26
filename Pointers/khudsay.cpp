#include<iostream>
using namespace std; 

int main(){
    int x=10;
    float y=10.65;
    int *ptr=&x;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<x<<endl;
    float *ptrf=&y;
  cout<<*ptrf<<endl;
    cout<<ptrf<<endl;
    cout<<&y<<endl;
    cout<<y<<endl;
return 0;
}