#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter any number n :";
    cin>>n;
    bool flag = true;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag =false;
            break;
        }
        }
        if(n==1){
            cout<<"Neighter prime nor composite";

        }
        else if(flag==true){
            cout<<"Its prime";
        }
        else{
                        cout<<"Its composite";

        }
    

return 0;
}