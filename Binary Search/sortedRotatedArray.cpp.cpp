#include<iostream>
#include<vector>
using namespace std; 

int findMinimumSortedRotated(vector<int> &input) {
    if (input.size() == 1) return input[0];
    
    int lo = 0, hi = input.size() - 1;
    
    // Check if the array is not rotated
    if (input[lo] < input[hi]) {
        return lo;
    }
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
       if(input[mid]>input[mid+1]) return mid+1;
       if(input[mid]<input[mid-1]) return mid;
       if (input[mid] > input[lo]) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    
    return -1; // This should never be reached if the input is valid
}

int main() {
    int n;
    cin >> n;

    std::vector<int> input;
    for (int i = 0; i < n; i++) {
        int x;
                cin >> x;
                input.push_back(x);
    }

    cout << findMinimumSortedRotated(input) << endl;

    return 0;
}
