class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_sum = float("-inf")
        running_sum = 0
        for num in nums:
            running_sum += num
            if max_sum < running_sum:
                max_sum = running_sum
            if running_sum < 0:
                running_sum = 0
        return max_sum