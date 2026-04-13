class Solution {
public:
    int characterReplacement(string s, int k) {
        int left{0}, ans{0}, max_freq{0};
        std::unordered_map<char,int> mp;
        for (int right{0};right<s.length();right++) {
            mp[s[right]]++; // 出現頻度をmapで管理。key:char, value: 出現回数
            max_freq = max(max_freq, mp[s[right]]); // 出現回数が最も多い文字を同定

            while((right-left+1)-max_freq > k) { //k回数よりも変更が必要な変数が少ない場合、最も長くできる
                mp[s[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};
