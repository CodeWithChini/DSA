#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxArea = 0;

    while (left < right) {
        int ht = min(height[left], height[right]);
        int width = right - left;
        int area = ht * width;
        maxArea = max(maxArea, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxArea;
}

int main()
{
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    vector<int> height(n);
    cout << "Enter the heights: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "for line " << i << ": ";
        cin >> height[i];
    }
    cout << "The maximum water that can be contained is: " << maxArea(height);
    return 0;
}
