class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict_num = {}
        for i in range(0, len(nums)):
            if nums[i] not in dict_num:
                dict_num[target - nums[i]] = i
            else:
                return [dict_num[nums[i]], i]