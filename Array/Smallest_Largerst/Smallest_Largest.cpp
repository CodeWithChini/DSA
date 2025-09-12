#include<iostream>
using namespace std;

int main()
{
    int smallest, largest, size,i;
    cout <<"Enter an size of array: ";
    cin >> size;
    int n[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> n[i];
    }

    smallest = INT_MAX;
    largest = INT_MIN;

    // Alternative method to find smallest and largest elements

    smallest = n[0];
    for(int i = 1;i < size; i++)
    {
        if(n[i] < smallest)
        {
            smallest = n[i];
            // cout << i << endl; // if you want to print the index of smallest element
        }
    }

    largest = n[0];
    for(int i = 1; i < size ;i++)
    {
        if(n[i] > largest)
        {
            largest = n[i];
            // cout << i << endl; // if you want to print the index of largest element
        }
    }

    //sortest method to find smallest and largest
    // for(i = 0 ; i < size ; i++)
    // {
    //     smallest = min(n[i], smallest);
    //     largest = max(n[i], largest);
    // }

    cout << "Smallest element in the array is: " << smallest << endl;
    cout << "Largest element in the array is: " << largest << endl;

}
