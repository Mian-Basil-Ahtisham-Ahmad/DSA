#include<iostream>
#include<string>
using namespace std; 

int main(){
    // string str= "abcd";
    // string str1=("efgh");
    // cout<<str<<" "<<str1;

string str;
//cin>>str;
getline(cin,str);
cout<<str;
cout<<endl;
return 0;
}