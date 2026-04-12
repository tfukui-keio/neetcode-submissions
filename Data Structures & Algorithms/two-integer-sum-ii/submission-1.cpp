class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left_idx{0};
        int right_idx{int(numbers.size())-1};

        while (true) {
            int sum = numbers[left_idx] + numbers[right_idx];

            if (sum == target) {
                return {left_idx+1, right_idx+1};
            }else if (sum > target) {
                right_idx--;
            }else if(sum < target) {
                left_idx++;
            }

            if (left_idx > right_idx) {
                break;
            }
        }
        return {};
    }
};
