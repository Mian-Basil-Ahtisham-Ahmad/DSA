#include<iostream>
using namespace std; 

int main(){
    int *ptr;
    cout<<ptr<<endl; // random address print
 int marks = 90;
 ptr=&marks;// reassaign update no need to add star
 cout<<ptr<<endl;

return 0;
}