#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // setを使用した解法
        // std::set<int> num_set{nums.begin(), nums.end()};
        // bool answer = !(nums.size() == num_set.size());
        // std::cout << answer << std::endl;

        // sortを使用した解法
        std::sort(nums.begin(), nums.end());
        bool answer = false;
        if (nums.size() != 0) {
            for (int i = 0; i < nums.size()-1 ; i++) {
                if (nums[i] == nums[i+1]) {
                    answer = true;
                    break;
                }
            }
        }

        return answer;
    }
};