#include<iostream>
using namespace std;

int main()
{
    int n, f1 = 0, f2 = 1, temp = 0;
    cout << "Enter a number :";
    cin >> n;

    for (int i = 1; i <= n;i++)
    {
        if (i == 1)
        {
            cout << f1  << endl;
        }
        if (i == 2)
        {
            cout << f2 << endl;
        }
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;

        cout << temp << endl;
    }
    return 0;
}
