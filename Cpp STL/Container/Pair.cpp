#include<iostream>
#include<vector>
using namespace std;

int main()
{
    pair<int,int> p = {1, 2};

    cout << p.first << endl;
    cout << p.second << endl;

    pair<string, int> p1= {"Hill", 6};

    cout << p1.first << endl;
    cout << p1.second << endl;

    pair<int, pair<char, int>> p2 = {1, {'h', 9}};

    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;

    //vector of pair
    vector<pair<int, int>> vec = {{1,2},{3,4},{5,6}};

    vec.push_back({7, 8}); // only insert
    vec.emplace_back(9, 10); // in-place objects create

    // for(pair<int,int> p : vec) in this case insted of telling pair type we can simply write auto
    for(auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
}
