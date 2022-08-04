class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        result = [[1]]
        if numRows == 1:
            return result
        result = [[1], [1, 1]]
        if numRows == 2:
            return result
        for i in range(1, numRows - 1):
            new_row = [1]
            for i in range(1, len(result[-1])):
                new_row.append(result[-1][i - 1] + result[-1][i])
            new_row.append(1)
            result.append(new_row)
        return result