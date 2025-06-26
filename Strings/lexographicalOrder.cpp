#include <iostream>
#include <vector>
using namespace std;

string countSort(string str) {
    vector<int> freq(26, 0);

    // Calculate frequency of each character
    for (int i = 0; i < str.length(); i++) {
        int index = str[i] - 'a';
        freq[index]++;
    }

    int j = 0;
    // Reconstruct the string based on frequency
    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            str[j++] = i + 'a';
        }
    }

    return str;
}

int main() {
    string str;
    cin >> str;
    cout << countSort(str) << endl;
    return 0;
}
