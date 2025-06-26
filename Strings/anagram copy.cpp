#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool isAnagram(string s1, string s2) {
    vector<int> freq(26, 0);

    // Check if lengths are different
    if (s1.length() != s2.length()) {
        return false;
    }

    // Count frequency of characters
    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (isAnagram(s1, s2)) {
        cout << "Strings are anagrams" << endl;
    } else {
        cout << "Strings are not anagrams" << endl;
    }

    return 0;
}
