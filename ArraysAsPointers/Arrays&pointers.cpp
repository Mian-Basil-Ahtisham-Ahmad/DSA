#include<iostream>
using namespace std; 

int main() {
    int arr[3] = {15, 12, 6}; // Initialize an array of integers
    int *ptr = &arr[0]; // Pointer to the first element of the array

    // Print the pointer, the array's address, and the values pointed by ptr and arr
    cout << ptr << " " << arr << " " << *ptr << " " << *arr << endl;  

    // Print the value of the first element using pointer arithmetic
    cout << *(arr + 0) << endl;            

    // Print the address of the second element and its value
    cout << *(arr + 1) <<endl;//<< " " << *(arr + 1) << endl;            

    // Print the address of the third element and its value
    cout << *(arr + 2) <<endl;//<< " " << *(arr + 2) << endl;            

    return 0;
}
