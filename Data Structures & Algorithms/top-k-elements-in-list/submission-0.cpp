class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mappings;

        // ① 出現回数を数える
        for (auto &num : nums) {
            mappings[num]++;
        }

        // ② map → vector に変換
        vector<pair<int, int>> freq;
        for (auto &p : mappings) {
            freq.push_back(p); // {num, count}
        }

        // ③ 出現回数で降順ソート
        sort(freq.begin(), freq.end(),
             [](const pair<int,int>& a, const pair<int,int>& b) {
                 return a.second > b.second;
             });

        // ④ 上位 k 個を取り出す
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freq[i].first);
        }

        return result;
    }
};