#include<iostream>
using namespace std; 

int main(){
    
    int array[]={3,4,7,6,1};
    int targetsum=7;
    int size =5;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<endl;
return 0;
}