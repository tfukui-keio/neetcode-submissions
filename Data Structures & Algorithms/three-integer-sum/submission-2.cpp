class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<vector<int>> ans_array{};
        sort(nums.begin(),nums.end()); // [-1,0,1,2,-1,-4] -> [-4,-1,-1,0,1,2]
        for (int i=0;i<nums.size();i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = nums.size()-1;
            int target = -nums[i];
            while (left<right) {
                int two_sum = nums[left] + nums[right];
                if (two_sum == target) {
                    ans_array.push_back({nums[i],nums[left],nums[right]});
                    
                    // Proceed index to search all data
                    left++;
                    right--;
                    // Check duplicate
                    while ((left < right) && (nums[left] == nums[left-1])) left++;
                    while  ((left < right) && (nums[right] == nums[right+1])) right--;
                }else if (two_sum < target) {
                    left++;
                }else {
                    right--;
                }
            }
        }
        return ans_array;
    }
};