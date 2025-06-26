#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the n :";
    cin>>n;
    int result=0;
    for(int i=1; i<=n;i++){
     if(result%2==0){
result-=i;
     }
     else{
        result+=i;

     }
         cout<<result;

    }
return 0;
}