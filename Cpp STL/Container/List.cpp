#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    l.push_front(1);
    l.push_front(2);
    l.push_back(3);
    l.push_back(4);

    l.pop_back();
    l.pop_front();

    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l1 = {1, 2, 3, 4, 5, 6};

    for(int val : l1)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
