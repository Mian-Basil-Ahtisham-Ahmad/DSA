#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int an = mid - l + 1;
    int bn = r - mid;

    vector<int> a(an);
    vector<int> b(bn);

    for (int i = 0; i < an; i++) {
        a[i] = arr[l + i];
    }

    for (int j = 0; j < bn; j++) {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < an && j < bn) {
        if (a[i] < b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    while (i < an) {
        arr[k++] = a[i++];
    }

    while (j < bn) {
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    int mid = l + (r - l) / 2; // to avoid overflow
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r); // this call was missing
}

int main() {
int arr[] = {10, 28, 24, 6, 34, 18, 38, 44};
int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
