#include<iostream>
using namespace std; 

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x = 10;
    int y = 5;
    int *ptr1=&x;
    int *ptr2=&y;
    cout<<"Before swapping"<<endl;
        cout << x << " " << y<<endl;

    swap(x, y);
    cout<<"after swapping"<<endl;

    cout << x << " " << y;
    return 0;
}
