// #include<iostream>
// using namespace std; 

// int main(){
//     int n;
//     cout<<"Enter any n :";
//     cin>>n;
//     for(int i=4; i<= 3*n+1;i+=3){
//         cout<<i<<" ";
//     }
// return 0;
// }


#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter any n :";
    cin>>n;
    int a=4;
    for(int i=1; i<= n;i++){
        cout<<a<<" ";
        a=a+3;
    }
return 0;
}