class Solution:
    def solve(self, n):
        array = []
        for i in range(1, n + 1):
            if i % 3 == 0:
                to_insert = "clap"
            elif '3' in str(i) or '6' in str(i) or '9' in str(i):
                to_insert = "clap"
            else:
                to_insert = str(i)
            array.append(to_insert)
        return array
