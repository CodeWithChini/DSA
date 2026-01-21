#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    //Check if Koko can finish at speed 'k'
    bool canFinish(const std::vector<int>& piles, int h, int k) {
        long long totalHours = 0;
        for (int pile : piles) {
            // Calculate ceil(pile / k) efficiently using integer math
            totalHours += (pile + k - 1) / k;
        }
        return totalHours <= h;
    }

    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canFinish(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
