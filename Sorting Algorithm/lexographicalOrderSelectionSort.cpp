#include <iostream>
#include <cstring> // for strcmp and strcpy

using namespace std;

void selectionSort(char fruit[][60], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(fruit[min_index], fruit[j]) > 0) {
                min_index = j;
            }
        }

        if (i != min_index) {
            char temp[60];
            strcpy(temp, fruit[i]);
            strcpy(fruit[i], fruit[min_index]);
            strcpy(fruit[min_index], temp);
        }
    }
}

int main() {
    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruit) / sizeof(fruit[0]);
    selectionSort(fruit, n);
    for (int i = 0; i < n; i++) {
        cout << fruit[i] << " ";
    }
    cout << endl;
    return 0;
}
