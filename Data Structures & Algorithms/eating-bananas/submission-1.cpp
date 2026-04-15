class Solution {
public:
    bool CanEat(std::vector<int>& piles, int mid, int h) {
        int time{0};
        for (const auto pile: piles) {
            time += (pile + mid - 1) / mid; // 切り上げ
        }
        return time <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left{1};
        int right = *max_element(piles.begin(), piles.end());

        while (left<right) {
            int mid  = (left+right)/2;
            if (CanEat(piles, mid, h)) {
                right=mid;
            } else {
                left=mid+1;
            }
        }
        return left;
    }
};
