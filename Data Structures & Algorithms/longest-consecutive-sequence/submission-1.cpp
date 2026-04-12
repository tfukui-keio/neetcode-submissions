class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set_list(nums.begin(), nums.end()); 
        int ans = 0; 
        for (int x : set_list) { 
            // 前の数字がない=開始点の場合のみ探索
            if (!set_list.count(x - 1)) {
                int cur = x; 
                int len = 1; 
                while (set_list.count(cur + 1)) { 
                    cur++; 
                    len++; 
                } 
                ans = max(ans, len); 
            } 
        } 
        return ans;
    }
};
