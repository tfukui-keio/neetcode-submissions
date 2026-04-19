class Solution {
public:
    // Solution 1
    // int findMin(vector<int> &nums) {
    //     return *std::min_element(nums.begin(), nums.end());
    // }

    // Solution 2
    int findMin(vector<int> &nums) {
        int result{nums[0]};
        int left{0}; int right{(int)nums.size()-1};
        while (left < right) {
            int mid{(left+right)/2};
            if (nums[mid] < nums[right]) {
                right = mid; // rightをmidに収縮させて探索範囲減らす
            } else {
                left = mid + 1;
            }
        }
        return nums[left];
    }
};
