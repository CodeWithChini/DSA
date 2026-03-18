// create a multiple keys
// we can also create a duplicate keys

#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    // this delete all tv
    // m.erase("tv");

    // if we want 1st only tv delete
    m.erase(m.find("tv"));

    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
