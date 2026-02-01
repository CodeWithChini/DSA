#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4, 5, 6};

    for(int val : d)
    {
        cout << val << " ";
    }
    cout << endl;

    // in list we cannot access random variable like l[2]
    // but in deque we can do that like d[3]
    cout << d[3] << endl;

    return 0;
}
