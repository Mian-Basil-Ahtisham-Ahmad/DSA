#include<iostream>
using namespace std; 

int main(){
    int a,b;
    cout<<"a:";
    cin>>a;
        cout<<"b:";
    cin>>b;

int c;
c=b;
b=a;
a=c;
cout<<"AFter the swapping"<<endl;
cout<<"Now a is "<<a<<endl;
cout<<"Now b is "<<b<<endl;

return 0;
}