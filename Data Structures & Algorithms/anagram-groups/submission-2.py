class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = defaultdict(list)
        for s in strs:
            count = [0] * 26 # 26文字分のベクトルにする
            for c in s:
                count[ord(c) - ord('a')] += 1
            result[tuple(count)].append(s) # tupleをkeyとして、そこにstrをぶち込み

        return list(result.values()) # これでvalueだけ取得可能