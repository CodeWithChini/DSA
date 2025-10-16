#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(tar > arr[mid])
        {
            st = mid + 1;
        }
        else if(tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
     int n, tar;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "for element " << i << ": ";
        cin >> nums[i];
    }
    cout << "Enter the target: ";
    cin >> tar;

    int result = binarySearch(nums, tar);

    if(result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array" << endl;
    }

    return 0;
}
