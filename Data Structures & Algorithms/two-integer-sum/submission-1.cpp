class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // {value, index}
        for (int i = 0; nums.size(); ++i) { // O(n)探索
            int need = target-nums[i];
            auto it = map.find(need);
            if (it != map.end()) {
                return {it->second, i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
