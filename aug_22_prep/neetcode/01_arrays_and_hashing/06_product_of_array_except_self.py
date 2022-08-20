class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        total_product, flag_zero = 1, 0
        for i in nums:
            if i != 0:
                total_product *= i
            else:
                flag_zero += 1
        result = []
        if flag_zero > 1:
            return [0]*len(nums)
        for i in range(0, len(nums)):
            if nums[i] != 0:
                if flag_zero == 1:
                    result.append(0)
                else:
                    result.append(int(total_product/nums[i]))
            else:
                result.append(int(total_product))
        return result