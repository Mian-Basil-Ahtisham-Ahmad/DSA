#include <iostream>
#include <vector>
using namespace std;

// Function to find the lower bound of target in sorted vector input
int lowerbound(const vector<int>& input, int target) {
    int lo = 0, hi = input.size() - 1;
    int ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] >= target) {
            ans = mid; // update ans, but continue search for potentially better lower bound
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

// Function to find the upper bound of target in sorted vector input
int upperbound(const vector<int>& input, int target) {
    int lo = 0, hi = input.size() - 1;
    int ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] > target) {
            hi = mid - 1;
        } else {
            ans = mid; // update ans, but continue search for potentially better upper bound
            lo = mid + 1;
        }
    }
    return ans;
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

    vector<int> result(2, -1); // Initialize result with two -1s

    int lb = lowerbound(input, target);
    if (lb != -1 && input[lb] == target) { // Check if target is found at lower bound
        int ub = upperbound(input, target);
        result[0] = lb;
        result[1] = ub - 1;
    }

    cout << result[0] << " " << result[1] << endl;

    return 0;
}
