#include<iostream>
using namespace std; 

int main(){
    int arr[2]={8,2};
    int *ptr=&arr[1];
    cout<<++*ptr<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl;
return 0;
}