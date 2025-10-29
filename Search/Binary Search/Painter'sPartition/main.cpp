//TC : O(log(sum) * n)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painter = 1, time = 0;

    for (int i = 0; i < n; i++)
    {
        if(time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];

            // If we need more painters than available or a single board exceeds max time
            if(painter > m || arr[i] > maxAllowedTime)
            {
                return false;
            }
        }
    }
    return true;
}

int minTimeToPaint(vector<int> &arr, int n, int m)
{
    if(m > n)
    {
        // In painter's partition, if more painters than boards,
        // we can assign one painter per board
        // So we need to find the maximum board length
        int maxBoard = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > maxBoard)
                maxBoard = arr[i];
        }
        return maxBoard;
    }

    int sum = 0;
    int maxBoard = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(arr[i] > maxBoard)
            maxBoard = arr[i];
    }

    // The answer lies between maxBoard (if we have many painters) and sum (if we have 1 painter)
    int ans = -1;
    int st = maxBoard, end = sum;  // Correct range

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter number of boards: ";
    cin >> n;
    cout << "Enter number of painters: ";
    cin >> m;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cout << "Enter length of board " << i << ": ";
        cin >> arr[i];
    }

    int result = minTimeToPaint(arr, n, m);

    cout << "Minimum time to paint all boards: " << result << endl;

    return 0;
}
