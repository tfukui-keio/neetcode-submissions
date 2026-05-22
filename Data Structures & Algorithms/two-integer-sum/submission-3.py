class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i in range(len(nums)):
            search_data = target - nums[i]
            index = seen.get(search_data, None)
            if index == None:
                seen[nums[i]] = i
            else:
                return [index, i]
        return []