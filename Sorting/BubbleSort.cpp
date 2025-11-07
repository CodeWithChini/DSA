#include <iostream>
#include <vector>
#include<algorithm>

void bubbleSort(std::vector<int>& arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(const std::vector<int>& arr)
{
    for (int x : arr)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array: ";
    printArray(data);

    bubbleSort(data);

    std::cout << "Sorted array: ";
    printArray(data);

    return 0;
}
