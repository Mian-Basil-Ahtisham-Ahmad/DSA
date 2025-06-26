#include<iostream>
using namespace std; 

int main(){
    const int row=3;
   const int col=3;

    int array[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>array[row][col];
        }
    }


     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          cout<<array[row][col]<<" ";
        }
            cout<<endl;

    }
return 0;
}