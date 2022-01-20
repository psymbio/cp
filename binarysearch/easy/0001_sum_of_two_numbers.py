class Solution:
    def solve(self, nums, k):
        hash_table = {}
        for num in nums:
            if k - num in hash_table:
                return True
            else:
                hash_table[num] = True
        return False
