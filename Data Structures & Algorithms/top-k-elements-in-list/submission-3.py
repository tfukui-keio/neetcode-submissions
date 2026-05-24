class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dictionary = defaultdict(int)
        for num in nums:
            dictionary[num] += 1

        # keyに対してx[1]を戻り値として返す。引数がxになっている。
        # sortedなlistをここで作成し直し
        sorted_dict = sorted(dictionary.items(), key = lambda x:x[1], reverse=True)
        ans = []
        for i in range(k):
            # これでdictの要素を一個ずつはアクセス可能
            ans.append(sorted_dict[i][0])

        return ans
