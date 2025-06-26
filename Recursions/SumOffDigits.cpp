#include<iostream>
using namespace std; 
int f(int n){
    if(n<=9 && n>=0){
        return n;
    }
    else{
        return f(n/10)+(n%10);
    }
}

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
     int result =f(n);
     cout<<result;
return 0;
}