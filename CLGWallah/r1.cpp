#include<iostream>
using namespace std; 

int main(){
//    int n,max;
//    cout<<"Enter any number : ";
//    cin>>n;
   int max=0;
   int arr[5]={1,2,3,4,5};
   for(int i=0;i<=5;i++){
if(max<arr[i]){
max=arr[i];
}
   }
cout<<max<<endl;

return 0;
}


// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5] = { 1, 2, 5, 4, 3 };
//     int max = 0;
//     for(int i = 0;i<5;i++)
//         {
//             if(max < arr[i])
//                 max = arr[i];
//         }
//     cout<<max<<endl;
//     return 0;
// }