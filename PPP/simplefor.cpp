#include<iostream>
using namespace std; 

int main(){
        cout<<"First time for the For Loop"<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<i<<"\n";
    }
    
    cout<<"Now for the while Loop"<<endl;
    int j=0;
    while(j<10){
        cout<<j<<endl;
        j+=2;
    }

    cout<<"Now for the do while Loop"<<endl;
    int k=10;
    do{
        cout<<k<<endl;
        k-=2;
    }while(k>1);
return 0;
}