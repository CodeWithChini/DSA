#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("phone", 108);

    m.erase("tv");

    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    if(m.find("camera") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }


    cout << "count : " << m.count("laptop") << endl;
    return 0;
}
