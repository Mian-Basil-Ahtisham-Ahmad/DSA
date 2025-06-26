#include<iostream>
using namespace std; 

int main(){
    int sum,num;
    cout<<"Enter any number : ";
    cin>>num;
    sum=0;
    while(num!=0){
        int digit=num%10;
        num=num/10;
        sum+=digit;
        cout<<"The sum is "<<sum<<endl;

    }
return 0;
}