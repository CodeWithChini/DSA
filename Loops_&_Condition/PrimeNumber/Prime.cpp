#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    bool isprime = true;

    for (int i = 2; i < n / 2; i++)
    {
        if(n % i == 0)
        {
            isprime = false;
            break;
        }
    }

    if(isprime == true)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
    return 0;
}
