class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left{0};
        std::unordered_map<char, int> map_s1;
        for (char c:s1) {
            map_s1[c]++;
        }
        std::unordered_map<char,int> map_s2;
        for (int right{0};right < s2.length(); right++) {
            if (right-left+1 > s1.length())  {
                map_s2[s2[left]]--;
                if (map_s2[s2[left]] == 0) {
                    map_s2.erase(s2[left]); // ここで消してあげないと0が残る
                }
                left++;
            }
            map_s2[s2[right]]++;
            std::cout << std::endl;
            if (map_s1 == map_s2) return true; // ここで各mapの要素一致をみている。順番関係なし
        }
        return false;
    }
};
