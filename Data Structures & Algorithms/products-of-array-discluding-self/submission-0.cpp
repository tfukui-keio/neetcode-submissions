class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> results;
        int pre_result{1};
        for (int i=0; i<nums.size(); ++i) { // 0~N個めでindexをincrement
            int result = pre_result; // i=n-1の前までの結果を保存

            // ↓でi=n+1以降の値を掛ける
            for (int j=i+1; j< nums.size(); ++j) { // 次のindexに至るまでの結果を保存しておき，次に使用する
                if (j == i+1) {
                    pre_result *= nums[i];
                }
                result *= nums[j];
            }
            results.emplace_back(result);
        }
        return results;
    }
};
