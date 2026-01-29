#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);

    // for each loop to print value of vector
    for(int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // at () or []
    cout << "val at index 2 is " << vec[2] << " or " << vec.at(2) << endl;

    //front and back
    cout << "vector front element " << vec.front() << endl;
    cout << "vector back element " << vec.back() << endl;

    //size and capacity
    cout << vec.size() << endl; //3
    cout << vec.capacity() << endl; //4
    return 0;
}
