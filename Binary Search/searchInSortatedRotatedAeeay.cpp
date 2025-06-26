#include<iostream>
#include<vector>
using namespace std;

int binarySearchSortedRotated(vector<int> &input, int target) {
    int lo = 0, hi = input.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] == target) return mid;  
        if (input[mid] >= input[lo]) {
            if (target >= input[lo] && target < input[mid]) {
                hi = mid - 1; 
            } else {
                lo = mid + 1;
            }
        } else {
            if (target > input[mid] && target <= input[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;    
            }
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int target;
    cin >> target;

    int result = binarySearchSortedRotated(input, target);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
