#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;
int count =0;
int sum=0;
    while(n!=0){
        n=n/10;
        count++;
        n=n%10;

sum=sum+count;
    }
    cout<<count<<endl;
    cout<<sum;

return 0;
}