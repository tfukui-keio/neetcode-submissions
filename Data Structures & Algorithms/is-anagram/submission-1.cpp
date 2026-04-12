#include <algorithm>
class Solution {
public:
    bool isAnagram(string s, string t) {
        bool is_anagram = false;
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());
        if (s == t) {
            is_anagram = true;
        }
        return is_anagram;
    }
};
