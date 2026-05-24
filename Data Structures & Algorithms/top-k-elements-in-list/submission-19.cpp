class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Strategy: Bucket Sort
        // 1. Count frequency and create hash map
        // 2. Create frequency list
        // 3. print result

        // 1. Count frequency and create hash map
        std::unordered_map<int, int> count_map;
        for (const auto& num: nums) {
            count_map[num] += 1;
        }

        // 2. Create frequency list
        std::vector<std::vector<int>> freq;
        freq.resize(nums.size()+1);
        for (const auto& [key,value]: count_map) {
            freq[value].push_back(key);
        }

        // 3. print result
        std::vector<int> result;
        for (int i{(int)freq.size()-1}; i > 0;i--) {
            for (const auto& data: freq[i]) {
                result.push_back(data);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};