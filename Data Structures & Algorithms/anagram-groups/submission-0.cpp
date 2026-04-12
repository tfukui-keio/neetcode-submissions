class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<std::string, std::vector<std::string>> map;
        for (const auto &org_str: strs) {
            auto str = org_str; // 元がsortで変わってしまうので事前にコピー
            sort(str.begin(), str.end());
            map[str].push_back(org_str);
        }

        std::vector<std::vector<std::string>> results;
        for (auto& [key, value] : map) {
            results.push_back(std::move(value));
        }
        return results;

    }
};
