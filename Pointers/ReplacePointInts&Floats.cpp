#include<iostream>
using namespace std; 

int main(){
    float x = 4.5;
    float *float_ptr = &x;
    cout << "Address of x: " << float_ptr << endl;

    int y = 4;
    int *int_ptr = &y;
    cout << "Address of y: " << int_ptr << endl;

    return 0;
}
