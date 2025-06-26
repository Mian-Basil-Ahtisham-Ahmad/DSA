#include<iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = 5; // Size of array, not necessary for rotation
    int k = 2; // Number of rotations

    k = k % n;
    int ansarray[5];
    int j = 0;

    // Copy the last k elements to ansarray
    for (int i = n - k; i < n; i++) {
        ansarray[j++] = array[i];
    }

    // Copy the first n-k elements to ansarray
    for (int i = 0; i < n - k; i++) {
        ansarray[j++] = array[i];
    }

    // Print the elements of ansarray
    for (int i = 0; i < n; i++) {
        cout << ansarray[i] << " ";
    }

    return 0;
}
