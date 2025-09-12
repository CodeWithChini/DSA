#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if(c == 'A' || c == 'E' || c == 'i' || c == 'O' ||c == 'U' ||c == 'a' ||c == 'e' ||c == 'i' ||c == 'u' || c == 'o')
    {
        cout << "Vowal";
    }
    else
    {
        cout << "Consonant";
    }
}
