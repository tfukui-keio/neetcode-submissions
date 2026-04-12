#include <iostream>
#include <string>

class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded{};
        for (auto str: strs) {
            // 長さが二桁以上の場合に対応できるように区切り文字を入れている
            encoded += to_string(str.size()) + "#" + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        std::vector<string> decoded;
        int i{0};
        while (i < s.size()) {
            int len_tail = i;
            while (s[len_tail] != '#') {
                len_tail++;
            }

            // 区切り文字に到達したので，stringを抜き出す
            // len_tailが#になっているので，len_tail-1まで取り出す        
            int strlen = std::stoi(s.substr(i, len_tail-i));

            // len_tail+1からstrlen分取り出す
            decoded.emplace_back(s.substr(len_tail+1, strlen));
            i =  len_tail+1 + strlen;
        }
        return decoded;
    }
};
