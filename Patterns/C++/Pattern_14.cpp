#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << ' ';
            space++;
        }
        int j = 1;
        int p =i ;
        while (j <= i)
        {
            cout << p;
            j++;
            p++;
        }
        p = i - 1;
        while (p >= 1)
        {
            cout << p + i - 1;
            p--;
        }
        cout << endl;
        i++;
    }
}
