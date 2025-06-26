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
    if (n1 > n2 && n1 > n3)
    {
        cout << "First maximum number is " << n1<<endl;
        if (n2 > n3)
        {
            cout << "2nd maximum number is " << n2 << endl;
            cout << "3rd maximum number is " << n3 << endl;
        }
        else
        {
            cout << "2nd maximum number is " << n3 << endl;
            cout << "3rd maximum number is " << n2 << endl;
        }
    }

   else if (n2 > n1 && n2 > n3)
    {
        cout << "First maximum number is " << n2<<endl;
        if (n1 > n3)
        {
            cout << "2nd maximum number is " << n1 << endl;
            cout << "3rd maximum number is " << n3 << endl;
        }
        else
        {
            cout << "2nd maximum number is " << n3 << endl;
            cout << "3rd maximum number is " << n1 << endl;
        }
    }



    else if (n3 > n1 && n3 > n2)
    {
        cout << "First maximum number is " << n3<<endl;
        if (n1 > n2)
        {
            cout << "2nd maximum number is " << n1 << endl;
            cout << "3rd maximum number is " << n2 << endl;
        }
        else
        {
            cout << "2nd maximum number is " << n1 << endl;
            cout << "3rd maximum number is " << n2 << endl;
        }
    }





    return 0;
}