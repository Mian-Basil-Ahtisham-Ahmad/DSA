#include<iostream>
using namespace std; 

int main(){
    int num;
    cout << "Enter any num: ";
    cin >> num;
    int sum = 0;
    
    while(num != 0){
        int mod = num % 10;
        num = num / 10;
        sum += mod;
    }
    
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
