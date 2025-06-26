#include<iostream>
using namespace std; 

int main(){

    int num,rem,mod;
    cout<<"Enter any number"<<endl; //123
    cin>>num;
    while(num!=0){
                rem=num%10;
        num=num/10;
         cout<<rem;


    }

    

    
    
return 0;
}