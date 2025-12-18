#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& num1, vector<int>& num2, int m, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while(i >= 0 && j >= 0)
    {
        if(num1[i] >= num2[j])
        {
            num1[idx--] = num1[i--];
        }
        else
        {
            num1[idx--] = num2[j--];
        }
    }

    while(j >= 0)
    {
        num1[idx--] = num2[j--];
    }
}

int main()
{
    vector<int> num1 = {1, 3, 5, 0, 0, 0};
    vector<int> num2 = {2, 4, 6};
    int m = 3, n = 3;

    merge(num1, num2, m, n);

    cout << "Test Case 1 - Merged array: ";
    for(int num : num1)
    {
        cout << num << " ";
    }
    cout << endl;

    num1 = {4, 5, 6, 0, 0, 0};
    num2 = {1, 2, 3};
    m = 3, n = 3;

    merge(num1, num2, m, n);

    cout << "Test Case 2 - Merged array: ";
    for(int num : num1)
    {
        cout << num << " ";
    }
    cout << endl;

    num1 = {1, 2, 3, 0, 0, 0};
    num2 = {4, 5, 6};
    m = 3, n = 3;

    merge(num1, num2, m, n);

    cout << "Test Case 3 - Merged array: ";
    for(int num : num1)
    {
        cout << num << " ";
    }
    cout << endl;

    num1 = {1, 2, 3};
    num2 = {};
    m = 3, n = 0;

    num1.resize(m + n);

    merge(num1, num2, m, n);

    cout << "Test Case 4 - Merged array: ";
    for(int num : num1)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
