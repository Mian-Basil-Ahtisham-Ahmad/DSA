#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string decodedString(string s) {
    stack<char> result;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ']') {
            result.push(s[i]);
        } else {
            string str = "";
            while (!result.empty() && result.top() != '[') {
                str.push_back(result.top());
                result.pop();
            }
            reverse(str.begin(), str.end());
            result.pop(); // pop the '['
            
            string num = "";
            while (!result.empty() && isdigit(result.top())) {
                num.push_back(result.top());
                result.pop();
            }
            reverse(num.begin(), num.end());
            int int_num = stoi(num);

            string repeated_str = "";
            while (int_num--) {
                repeated_str += str;
            }
            for (char c : repeated_str) {
                result.push(c);
            }
        }
    }

    string decoded = "";
    while (!result.empty()) {
        decoded.push_back(result.top());
        result.pop();
    }
    reverse(decoded.begin(), decoded.end());

    return decoded;
}

int main() {
    string str;
    cin >> str;
    cout << decodedString(str) << endl;
    return 0;
}
