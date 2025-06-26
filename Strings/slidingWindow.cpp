#include<iostream>
#include<algorithm>
using namespace std;

int longestOnes(string str, int k) {
    int start = 0;
    int zero_count = 0;
    int max_length = 0;

    for (int end = 0; end < str.length(); end++) {
        if (str[end] == '0') {
            zero_count++;
        }

        while (zero_count > k) {
            if (str[start] == '0') {
                zero_count--;
            }
            start++;
        }

        max_length = max(max_length, end - start + 1);
    }
    return max_length;
}

int main() {
    string str;
    cout << "Enter binary string: ";
    cin >> str;

    int k;
    cout << "Enter max flips: ";
    cin >> k;

    cout << "Longest contiguous subarray of 1s after flipping at most " << k << " 0s: " << longestOnes(str, k) << endl;
    return 0;
}
