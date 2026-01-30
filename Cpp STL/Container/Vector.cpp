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

    vector<int> vec2 = {1, 2, 3, 4, 5};

    //earse
    vec2.erase(vec2.begin());
    vec2.erase(vec2.begin() + 2); //delete a value at index 2

    for(int val : vec2)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> vec3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    // vec3.erase(vec3.begin() + 1, vec3.begin() + 9);

    //insert
    vec3.insert(vec3.begin() + 4 , 100);

    //clear
    vec3.clear();

    for(int val : vec3)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << vec3.size() << endl;
    cout << vec3.capacity() << endl;
    return 0;
}
