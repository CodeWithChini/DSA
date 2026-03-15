// stack is LIFO (Last in first out)
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s1;

    s1.swap(s);

    cout << "s size : " << s.size() << endl; // 0
    cout << "s1 size : " << s1.size() << endl; // 3

    // while(!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;
    // cout << s.top() << endl;
    return 0;
}
