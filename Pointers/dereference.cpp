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

return 0;
}