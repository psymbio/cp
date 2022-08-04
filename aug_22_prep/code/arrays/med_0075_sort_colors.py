class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        pivot = 1
        left, right = 0, len(nums) - 1
        i = 0
        while i <= right:
            if nums[i] == pivot:
                i += 1
            elif nums[i] < pivot:
                nums[left], nums[i] = nums[i], nums[left]
                left += 1
                i += 1
            else:
                nums[right], nums[i] = nums[i], nums[right]
                right -= 1
        return nums