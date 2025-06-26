#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter any number n : ";
    cin>>n;
    int prod=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        prod=prod*i;
        sum+=i;
    //  prod=i*n;
    //  cout<<prod<<endl;
    }
         cout<<prod<<endl;
         cout<<sum<<endl;

return 0;
}