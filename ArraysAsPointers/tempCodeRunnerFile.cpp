#include<iostream>
using namespace std; 
void process(int*arr, int n){
for(int i=0;i<n;i++){
cout<<*(arr+i)<<endl;
}
}
int main(){
    int arr[3]={5,1,2};
    process(arr,3);
return 0;
}