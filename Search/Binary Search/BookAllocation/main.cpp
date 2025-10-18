// TC : O(logN * n)  where N = Range over which we apply binary Search operation
//                         n = The total number of books

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int student = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > maxAllowedPages)
        {
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
    }
    return student > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    if(m > n)
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;  //range of possible answer

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(isValid(arr, n, m, mid))  //left
        {
            ans = mid;
            end = mid - 1;
        }
        else   // right
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
        int n, m;
        cout << "Enter number of books: ";
        cin >> n;
        cout << "Enter number of students: ";
        cin >> m;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
        {
             cout << "Enter pages of book " << i << ": ";
            cin >> arr[i];
        }

        int result = allocateBooks(arr, n, m);

        if(result == -1)
        {
            cout << "Allocation not possible! Number of students exceeds number of books." << endl;
        }
        else
        {
            cout << "Minimum possible maximum pages allocated to a student: " << result << endl;
        }

        return 0;
}
