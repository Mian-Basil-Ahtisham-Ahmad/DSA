#include<iostream>
using namespace std; 

int main(){
int marks;
cout<<"Enter any marks:"<<endl;
cin>>marks;
if(marks>33){
cout<<"Pass"<<endl;
}

else if(marks<33 ){
cout<<"Fail"<<endl;
}


 cout<<" NOW for ternary operator : ";
    marks > 33 ? cout << "Pass" << endl : cout << "Fail" << endl;


return 0;
} 