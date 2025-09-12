#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;
    cout << "Enter a , b and c values : " << endl;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;

    if(d == 0)
    {
        cout << "Root is real and equal" << endl;
        r1 = -b / (2 * a);
        cout << "r1 = " << r1 << endl;
    }
    else if(d > 0)
    {
        cout << "Root is real and different" << endl;
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "r1 = " << r1 << endl;
        cout << "r2 = " << r2 << endl;
    }
    else
    {
        cout << "Root is imaginary and different" << endl;
    }

}
