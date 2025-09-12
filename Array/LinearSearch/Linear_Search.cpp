#include<iostream>
using namespace std;

int Linear_Search(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return i;  // if target found ,it return index
        }
    }
    return -1; // if target not found
}

int main()
{
    int n, target;
    cout << "Enter Size of array : " ;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter a element you want to find in array : " ;
    cin >> target;

    cout << Linear_Search(arr, n, target) << endl;
}
