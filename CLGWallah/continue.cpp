#include<iostream>
using namespace std; 

int main(){
    for (int i = 0; i <=20; i++)
    {
        // if(i!=3 && i!=8){
        //     cout<<i<<" ";
        // }
        if(i==3) continue;
        if(i==8) continue;
         cout<<i<<" ";
    }
    
return 0;
}