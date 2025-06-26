#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int sum=0;
   while(n!=0){
 int mod=n%10;
 n=n/10;
 sum=sum+mod;
   }
   cout<<sum;
        
return 0;
}



