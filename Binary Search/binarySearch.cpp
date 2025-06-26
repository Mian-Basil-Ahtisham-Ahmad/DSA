#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& input, int target) {
    int lo = 0;
    int hi = input.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // Improved mid calculation to avoid overflow
        if (input[mid] == target) return mid;
        else if (input[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;  // Return -1 if target is not found
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> input(n);
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    int index = binarySearch(input, target);
    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }
    return 0;
}
