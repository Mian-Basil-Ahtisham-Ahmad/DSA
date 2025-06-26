#include<iostream>
using namespace std; 

int main(){
    int n1,n2;
    cout<<"Enter first no"<<endl;
    cin>>n1;
        cout<<"Enter second no"<<endl;
    cin>>n2;


    char op;
    cout<<"Enter any operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
    cout<<"Sum is"<<n1+n2<<endl;
        break;
case '-':
    cout<<"Subtraction is"<<n1-n2<<endl;
        break;

        case '*':
    cout<<"Multiply is"<<n1*n2<<endl;
        break;

        case '/':
    cout<<"Divide is"<<n1/n2<<endl;
        break;

        case '%':
    cout<<"Modulus is"<<n1%n2<<endl;
        break;

    
    default:
        cout<<"Please enter the following above operator "<<endl;

        break;
    }
return 0;
}