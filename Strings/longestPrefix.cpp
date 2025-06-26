#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string LongestCommonPrefix(vector<string> &str) {
    if (str.empty()) return "";

    sort(str.begin(), str.end());

    string s1 = str[0];
    string s2 = str[str.size() - 1];
    int i = 0;
    string ans = "";

    while (i < s1.size() && i < s2.size()) {
        if (s1[i] == s2[i]) {
            ans += s1[i];
            i++;
        } else {
            break;
        }
    }

    return ans;
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
