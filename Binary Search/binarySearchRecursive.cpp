#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& input, int target) {
    int lo = 0;
    int hi = input.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // Improved mid calculation to avoid overflow
        if (input[mid] == target) return mid;
        else if (input[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;  // Return -1 if target is not found
}

int binarySearchRecursive(vector<int> &input,int target,int lo, int hi){
if(lo>hi) return-1;
    int mid=(lo+hi)/2;
    if(input[mid]==target){
        return mid;
    }
if(input[mid]<target){
    return binarySearchRecursive(input,target,mid+1,hi);
}else{
        return binarySearchRecursive(input,target,lo, mid-1);

}

}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> input;
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
   cout<<binarySearchRecursive(input,target,0,n-1);
   cout<<endl;
    return 0;
}
