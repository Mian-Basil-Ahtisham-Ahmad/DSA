#include<iostream>
using namespace std; 
int main(){
    int n;
    int m;
    cout<<"Enter the values for rows :";
    cin>>n;
    cout<<"Enter the values for column :";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
return 0;
}