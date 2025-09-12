// pattern 10
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
#include <iostream>
using namespace std;

void Diamond(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * (n - i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter Number : ";
    cin >> n;
    Diamond(n);
    return 0;
}
