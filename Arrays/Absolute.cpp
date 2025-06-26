#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortedSquaredArray(vector<int> &v) {
    vector<int> ans(v.size());
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    int ans_ptr = v.size() - 1; // Pointer for filling ans from the end

    while (left_ptr <= right_ptr) {
        if (abs(v[left_ptr]) > abs(v[right_ptr])) {
            ans[ans_ptr--] = v[left_ptr] * v[left_ptr];
            left_ptr++;
        } else {
            ans[ans_ptr--] = v[right_ptr] * v[right_ptr];
            right_ptr--;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sortedSquaredArray(v);
    return 0;
}
