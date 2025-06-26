#include<iostream>  
using namespace std; 
int square(int r){
    return r*r;
}
double circumference(int r){
return 2*3.14*r;
}
double area(int r){
return 3.14*square(r);
}
int main(){
    int r=3;
    cout<<area(r)<<endl;
    cout<<circumference(r)<<endl;

     
return 0;
}