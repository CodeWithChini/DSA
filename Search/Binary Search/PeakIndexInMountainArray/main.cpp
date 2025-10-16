 #include<iostream>
 #include<vector>
 using namespace std;

 int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2;

        while(st <= end)
        {
            int mid = st + (end - st) / 2;

            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }

            if(arr[mid - 1] < arr[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "for element " << i << ": ";
        cin >> nums[i];
    }

    int result = peakIndexInMountainArray(nums);

    if(result != -1) {
        cout << "peak element found at index: " << result << endl;
    } else {
        cout << "peak element not found in the array" << endl;
    }

    return 0;
}
