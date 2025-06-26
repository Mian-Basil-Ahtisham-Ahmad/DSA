#include<iostream>
using namespace std; 

int main(){
    int array[]={1,2,3,4};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size =sizeof(array)/sizeof(array[0]);
char vowels[5];
for(int idx=0; idx<5;idx++){
    cout<<"Enter 5 vowels";
cin>>vowels[idx];
}
for(int idx=0; idx<5;idx++){
cout<<vowels[idx]<<endl;
}
    return 0;
}
