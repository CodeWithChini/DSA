#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    // in this case in our set if 4 is present then ans is => 4
    // but in set 4 is not present then just bigger then 4 is print
    // in last case in our set 4 and bigger then 4 value doesn't exsist then our set return => set.end() value
    cout << "lower bound : " << *(s.lower_bound(4)) << endl; // 4
    cout << "lower bound : " << *(s.upper_bound(4)) << endl; // 5

    // it is not printed because it's store uniquely
    // s.insert(4);
    // s.insert(5);
    // s.insert(6);

    for (auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;
}
