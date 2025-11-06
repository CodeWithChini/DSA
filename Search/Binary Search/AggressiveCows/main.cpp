#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int N, int C, int minAllowedDist)
{
    int cows = 1, lastStallPosition = stalls[0];

    for (int i = 1; i < N; i++)
    {
        if(stalls[i] - lastStallPosition >= minAllowedDist)
        {
            cows++;
            lastStallPosition = stalls[i];
        }
        if(cows == C)
        {
            return true;
        }
    }
    return false;
}

int getLargestMinDistance(vector<int> &stalls, int N, int C)
{
    sort(stalls.begin(), stalls.end());

    int st = 1, end = stalls[N - 1] - stalls[0], ans = -1;
    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(isPossible(stalls, N, C, mid))
        {
            // Can maintain this minimum distance, try for larger
            ans = mid;
            st = mid + 1;
        }
        else
        {
            // Cannot maintain this minimum distance, try smaller
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, c;
    cout << "Enter number of stalls: ";
    cin >> n;
    cout << "Enter number of cows: ";
    cin >> c;

    vector<int> stalls(n);

    for(int i = 0; i < n; i++)
    {
        cout << "Enter position of stall " << i + 1 << ": ";
        cin >> stalls[i];
    }

    int result = getLargestMinDistance(stalls, n, c);

    cout << "Largest minimum distance between cows: " << result << endl;

    return 0;
}
