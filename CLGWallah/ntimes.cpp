#include<iostream>
using namespace std; 

int main(){
    int n, count;
    cout<<"Enter any number :";
    cin>>n;
    count=0;
    
    
    while(n!=0){
        n=n/10;
        cout<<n<<endl;
        count++;
    }
            cout<<count<<endl;


return 0;
}