class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums = list(sorted(set(nums)))
        if len(nums) == 0:
            return 0
        longest_start, longest_end, longest_len = 0, 0, 0
        for i in range(0, len(nums) - 1):
            if nums[i] + 1 == nums[i+1]:
                longest_end = i + 1
            else:
                longest_start = i + 1
                longest_end = i + 1
            
            if longest_len < longest_end - longest_start:
                longest_len = longest_end - longest_start
        return longest_len + 1