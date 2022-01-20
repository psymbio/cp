class Solution:
    def solve(self, num):
        string_num = str(num)
        left = 0
        right = len(string_num) - 1
        is_palin = False

        while left <= right:
            if string_num[left] == string_num[right]:
                is_palin = True
                left += 1
                right -= 1
            else:
                return False
        return is_palin
