#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    //using temp variable
   int temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;


    // without using temp variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << endl;
    cout << b << endl;
}
