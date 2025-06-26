#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Please enter any number :";
    cin>>n; 
    for(int i=0;i<=n;i++) {  
        int mod;
        int rem;

       mod=n%10;
       rem=n/10;
       cout<<mod;
       }
       
    
     
return 0;
}