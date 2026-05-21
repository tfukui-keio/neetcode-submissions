class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dict_s = {}
        dict_t = {}
        for key in s:
            dict_s[key] = dict_s.get(key, 0) + 1
        for key in t:
            dict_t[key] = dict_t.get(key, 0) + 1

        return dict_s == dict_t