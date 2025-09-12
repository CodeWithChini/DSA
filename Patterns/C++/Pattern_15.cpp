// pattern 15
// 11111
//  2222
//   333
//    44
//     5

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a num : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i;j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << (i + 1);
        }
        cout << endl;
    }
}
