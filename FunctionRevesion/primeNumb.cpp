#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i=2;i<=(num-1);i++)
    if (num % i == 0)
    {
        return false; 
    }
    else
    {
        return true; 
    }
}

bool isPrimeBtr(int num)
{
    for(int i=2;i*i<=num;i++)
    if (num % i == 0)
    {
        return false; 
    }
    else
    {
        return true; 
    }
}

int main()
{
    // cout<<isPrime(17)<<endl;
    // cout<<isPrime(12)<<endl;
    // cout<<isPrime(13)<<endl;
    // cout<<isPrime(6)<<endl;
    // cout<<isPrime(11)<<endl;

   
    for (int i = 2; i <= 40; i++)
    {
        if (isPrimeBtr(i))
        {
            cout << i << " ";
        }
    }
    cout << endl; 
    return 0;
}
