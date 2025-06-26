#include<iostream>
using namespace std; 

int main(){
    // int no_of_char =9;
    // for(int j=0; j<no_of_char;j++){
    //     char ch=(char)('A'+j);
    //     cout<<ch;
    // }
    int n;
    cout<<"Enter n";
    cin>>n;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";

    }
     for(int j=1;j<=2*i-1;j++){
                cout<<"*";
     }
     cout<<endl;
    }

return 0;
}
  
   