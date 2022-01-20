class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        missing_nums = []
        hash_table = {}
        for num in nums:
            hash_table[num] = True
        for i in range(1, len(nums) + 1):
            if (i not in hash_table):
                missing_nums.append(i)
        
        return missing_nums
