#include<iostream>
using namespace std;

void Reverse_Array(int arr[], int size)
{
    int start = 0, end = size - 1;

    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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

    Reverse_Array(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
