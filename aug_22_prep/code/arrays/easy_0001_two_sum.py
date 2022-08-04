class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict_nums = {}
        for i in range(0, len(nums)):
            if nums[i] in dict_nums:
                return [dict_nums[nums[i]], i]
            else:
                dict_nums[target - nums[i]] = i