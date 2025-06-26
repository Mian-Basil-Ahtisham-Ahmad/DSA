#include<iostream>
using namespace std; 

int main(){
    cout<<" For oddd"<<endl;
    for (int i = 0; i < 100; i++)
    {
if(i%2!=0){
    cout<<i<<" ";
}    

}
cout<<endl;



  cout<<" For even"<<endl;
    for (int i = 0; i < 100; i++)
    {
if(i%2==0){
    cout<<i<<" ";
} 

}
cout<<endl;



cout<<" For 50 times i run "<<endl;
    for (int i = 0; i <= 100; i+=2)
    {
if(i%2==0){
    cout<<i<<" ";
}    
}   
cout<<endl;


return 0;
}

