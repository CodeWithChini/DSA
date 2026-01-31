#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    cout << "vec.begin : " << *(vec.begin()) << endl; // 1
    cout << "vec.end : " << *(vec.end()) << endl; // 0

    // forward iterator
    vector<int>::iterator it;

    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // backward iterator
    vector<int>::reverse_iterator itr;

    for (itr = vec.rbegin(); itr != vec.rend(); itr++)
    {
        cout << *(itr) << " ";
    }
    cout << endl;

    // morden c++ iterator formate : auto 
    for (auto i = vec.rbegin(); i != vec.rend(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;


    return 0;
}
