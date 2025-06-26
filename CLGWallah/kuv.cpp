#include<iostream>
using namespace std;

int main() {
    int i = 5;
    while (true) {
        if (i % 7 == 0) {
            break;
        }
        i += 5;
    }
    cout << "The smallest number divisible by both 5 and 7 is: " << i << endl;
    return 0;
}