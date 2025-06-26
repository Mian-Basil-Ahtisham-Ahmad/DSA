#include<iostream>
using namespace std; 

int main(){
    int x=98;
        cout<<"before converting into char :"<<x<<endl;
    char ch= char(x);
    cout<<"after converting into char :"<<ch<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Now convert Ascii into Number"<<endl;
    char cha='a';
    int y=(int)cha;
    cout<<y<<"\n";
return 0;
}