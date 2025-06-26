#include<iostream>
using namespace std; 
void changeValue(int n){
    n=100;
}
int main(){
    int a=5;
 changeValue(a);
 cout<<a;

return 0;
}
