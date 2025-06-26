#include <iostream>
using namespace std;

bool isOdd(int num)
{
    // Check if the number is divisible by 2 with remainder 1
    if (num % 2 == 1)
    {
        return true; // If true, it's odd
    }
    else
    {
        return false; // If false, it's even
    }
}

int main()
{
    int a = 1;
    int b = 10;
    for (int i = a; i <= b; i++)
    {
        if (isOdd(i))
        {
            cout << i << " ";
        }
    }
    cout << endl; // Output newline after loop
    return 0;
}
