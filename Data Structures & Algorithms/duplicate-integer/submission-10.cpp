class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // time complecity: O(NlogN)
        // space: O(n)
        // std::set<int> num_set = std::set<int>(nums.begin(), nums.end());

        // return num_set.size() != nums.size();
        
        std::unordered_set<int> seen{nums.begin(),nums.end()};
        return seen.size() != nums.size();

    }
};