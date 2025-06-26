#include <iostream>
#include <vector>
using namespace std;

int peakInMountainArray(vector<int> &input) {
    int lo = 1, hi = input.size() - 2; 
    // Change to exclude the last element
    int ans=-1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] > input[mid - 1] && input[mid] > input[mid + 1]) {
            return mid; // Directly return the peak index
        } else if (input[mid] > input[mid - 1]) {
            ans=max(ans,mid);
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1; // This should never be reached if input is a valid mountain array
}

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    cout << peakInMountainArray(input) << endl;
    return 0;
}
