class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> num_set = std::set<int>(nums.begin(), nums.end());

        return num_set.size() != nums.size();
    }
};