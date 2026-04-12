#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool answer{false};
        // // setを使用した解法
        // std::set<int> num_set{nums.begin(), nums.end()};
        // answer = !(nums.size() == num_set.size());
        // std::cout << answer << std::endl;

        // sortを使用した解法
        // std::sort(nums.begin(), nums.end());
        // if (nums.size() != 0) {
        //     for (int i = 0; i < nums.size()-1 ; i++) {
        //         if (nums[i] == nums[i+1]) {
        //             answer = true;
        //             break;
        //         }
        //     }
        // }

        // hash setを利用した方法
        unordered_set<int> seen;
        for (int num: nums) {
            if (seen.count(num)) {
                answer=true;
                break;
            }
            seen.insert(num);
        }

        return answer;
    }
};