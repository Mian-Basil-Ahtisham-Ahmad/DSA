#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string LongestCommonPrefix(vector<string> &str) {
    if (str.empty()) return "";

    string s1 = str[0];
    int ans_length = s1.size();

    for (int i = 1; i < str.size(); i++) { // Start from 1 as 0th string is the initial prefix
        int j = 0;
        while (j < s1.size() && j < str[i].size() && s1[j] == str[i][j]) {
            j++;
        }
        ans_length = min(ans_length, j); // Update the length of the common prefix
    }

    return s1.substr(0, ans_length);
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter strings: ";
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cout << "Longest common prefix: " << LongestCommonPrefix(str) << endl;

    return 0;
}
