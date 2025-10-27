// 0 1 2 2 1 0 0 1
// 0 0 0 1 1 1 2 2
// - Single scan - only one loop, no inner loop

#include<iostream>
using namespace std;

int main() {
    int arr[100000];
    int n;
    cin >> n;

    for (int i{}; i < n; i++) {
        cin >> arr[i];
    }

    int nextZeroIndex = 0;
    int nextSecondIndex = n - 1;
    int index = 0;

    while (index <= nextSecondIndex) {
        if(arr[index] == 0)
        {
            swap(arr[index], arr[nextZeroIndex]);
            nextZeroIndex++;
            index++;
        }
        else if(arr[index] == 2)
        {
            swap(arr[index], arr[nextSecondIndex]);
            nextSecondIndex--;
        }
        else
        {
            index++;
        }
    }

    for (int i{}; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
