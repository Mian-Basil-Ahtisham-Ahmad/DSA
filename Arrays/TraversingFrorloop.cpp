#include<iostream>
using namespace std; 

int main(){
    int array[]={1,2,3,4};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size =sizeof(array)/sizeof(array[0]);
        cout<<"Now for For loop"<<endl;

    for(int idx=0;idx<size;idx++) {
        cout<<array[idx]<<endl;
    }
    cout<<"Now for while loop"<<endl;

int index =0;
while (index<size){
            cout<<array[index]<<endl;
index++;
}
    return 0;
}
