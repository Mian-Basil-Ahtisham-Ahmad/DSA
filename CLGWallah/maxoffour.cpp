#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter the values of n1 ";
    cin >> n1;
    cout << "Enter the values of n2 ";
    cin >> n2;
    cout << "Enter the values of n3 ";
    cin >> n3;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "max is " << n1 << endl;
        }
        else
        {
            cout << "max is " << n3 << endl;
        }
    }
    else
    {
        if (n2 > n3)
        {
            cout << "max is " << n2 << endl;
        }
        else
        {
            cout << "max is " << n3 << endl;
        }
    }
}
