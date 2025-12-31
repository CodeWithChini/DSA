#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &A)
{
    // find pivot
    int pivot = -1, n = A.size();

    for (int i = n - 2; i >= 0; i--)
    {
        if(A[i] < A[i+1])
        {
            pivot = i;
            break;
        }
    }

       if(pivot == -1)
       {
          reverse(A.begin(), A.end()); //in place changes
          return;
       }

       // find 2nd larger element
       for(int i=n-1; i>pivot; i--)
       {
            if(A[i] > A[pivot])
            {
                swap(A[i], A[pivot]);
                break;
            }
       }

       //reverse element
       //reverse(A.begin()+pivot+1, A.end());

        int i = pivot + 1, j = n-1;
        while(i<=j)
        {
            swap(A[i++], A[j--]);
        }
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

    cout << "\nOriginal permutation: ";
    for(int num : nums)
        cout << num << " ";
    cout << endl;

    nextPermutation(nums);

    cout << "Next permutation: ";
    for(int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}
