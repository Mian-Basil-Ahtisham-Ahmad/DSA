#include<iostream>
using namespace std; 

int main() {
    int p;
    int q;
    cout << "Enter p :";
    cin >> p;
    cout << endl;
    cout << "Enter q :";
    cin >> q;
    cout << endl;
    
    int pow = 1; // Initialize pow to 1
    for (int i = 1; i < q; i++) { // Loop should run q times
        pow = pow * p; // Multiply pow by p in each iteration
    }
    
    cout << pow << endl; // Output the result
    return 0;
}
