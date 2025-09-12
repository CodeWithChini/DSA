#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while(i < j)
    {
        int pairSum = nums[i] + nums[j];

        if(pairSum > target)
        {
            j--;
        }
        else if(pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans; // Return the first pair found
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> vec;

    for(int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the element: ";
        cin >> x;
        vec.push_back(x);
    }

    int target;
    cout << "Enter a target value : " << endl;
    cin >> target;

    vector<int> result = pairSum(vec, target);
    cout << "The indices of the pairs whose sum is equal to target are: " << endl;
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
