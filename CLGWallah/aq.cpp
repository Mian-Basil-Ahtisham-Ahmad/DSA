#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;
int prod=1;
    while(n!=0){
        int mod;
      mod=n%10;
    if(mod%2==0){
   prod=prod*mod;
   }
    n=n/10;

    }
    cout<<prod;

return 0;
}