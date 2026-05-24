class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dictionary = defaultdict(int)
        for num in nums:
            dictionary[num] += 1

        sorted_dict = sorted(dictionary.items(), key = lambda x:x[1], reverse=True)
        ans = []
        for i in range(k):
            ans.append(sorted_dict[i][0])

        return ans
