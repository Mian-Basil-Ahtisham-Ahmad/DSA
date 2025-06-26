#include<iostream>
using namespace std; 

int main(){
    int p;
    int q;
    cout<<"Enter p";
    cin>>p;
    cout<<endl;
        cout<<"Enter q";
    cin>>q;
    cout<<endl;
    int pow;
    for(int i=0;i<=q;i++){
        pow=p*i;
    }
    cout<<pow;
return 0;
}