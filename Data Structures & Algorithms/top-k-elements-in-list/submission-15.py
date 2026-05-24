class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = defaultdict(int)

        # count mapを作成する
        for num in nums:
            count[num] += 1

        # Bucket作成(キーが出現頻度、valueがその頻度だった値)
        freq_map = [[] for _ in range(len(nums)+1)]
        for key, value in count.items():
            freq_map[value].append(key)

        ans = []
        for i in range(len(freq_map) - 1, 0, -1):  # 高頻度から降順に
            for num in freq_map[i]:
                ans.append(num)
                if len(ans) == k:
                    return ans
