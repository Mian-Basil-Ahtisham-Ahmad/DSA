#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    int org =n;
    int sum;
            int r=0;
    while(n!=0){
        int mod=n%10;
        r*=10;
        r+=mod;
    // r=r*10 + mod;
    n/=10;

    }
        cout<<"The reverse of number is :"<<r<<endl;
        sum= org +r;
        cout<<"The sum of number is :"<<sum;

return 0;
}