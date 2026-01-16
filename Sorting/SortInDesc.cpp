#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::vector<int> vec = {34, 12, 56, 8, 2};

     // Sort in descending order
    std::sort(vec.begin(), vec.end(), std::greater<int>());

    std::cout << "Sorted vector (desc): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    return 0;
}
