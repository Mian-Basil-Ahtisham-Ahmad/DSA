#include<iostream>
using namespace std; 

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n; 

    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            result -= i; // Subtract even numbers
        } else {
            result += i; // Add odd numbers
        }
        if (i != 1) {
            cout << (i % 2 == 0 ? "-" : "+"); // Print the operator
        }
        cout << i;
    }
    cout << endl;

    return 0;
}
