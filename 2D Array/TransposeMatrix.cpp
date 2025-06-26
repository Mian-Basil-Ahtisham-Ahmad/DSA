#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    // Use vector to dynamically create 2D array
    vector<vector<int>> array(n, vector<int>(m));

    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    // Use vector to dynamically create transpose array
    vector<vector<int>> transpose(m, vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            transpose[i][j] = array[j][i];
        }
    }

    cout << "Original array:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed array:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
