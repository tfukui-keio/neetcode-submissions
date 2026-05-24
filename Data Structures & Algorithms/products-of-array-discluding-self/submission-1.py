class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = [1] * len(nums)
        prefix = 1
        for i in range(len(nums)):
            if i == 0:
                pass
            else:
                prefix *= nums[i-1]
                output[i] = prefix
        
        print("prefix: ",output)
        suffix = 1
        for i in range(len(nums)-1, -1, -1):
            if i == len(nums)-1:
                pass
            else:
                suffix *= nums[i+1]
                output[i] *= suffix

        return output