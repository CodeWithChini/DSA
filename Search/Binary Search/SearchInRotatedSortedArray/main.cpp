// Time Complexity : O(log n)

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& A, int tar) {
        int st = 0 , end = A.size() - 1;

        while(st <= end)
        {
            int mid = st + (end - st)/2;

            if(A[mid] == tar)
            {
                return mid;
            }

            if(A[st] <= A[mid]) //left sorted
            {
                if(A[st] <= tar && tar <= A[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else // right sorted
            {
                if(A[mid] <= tar && tar <= A[end])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
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

    int result = search(nums, tar);

    if(result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array" << endl;
    }

    return 0;
}
