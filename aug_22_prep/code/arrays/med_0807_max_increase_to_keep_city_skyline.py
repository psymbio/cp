class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        result = 0
        max_for_cols = [0] * len(grid[0])
        max_for_rows = [0] * len(grid)
        for i in range(0, len(grid)):
            for j in range(0, len(grid[0])):
                max_for_cols[j] = max(max_for_cols[j], grid[i][j])
                max_for_rows[i] = max(max_for_rows[i], grid[i][j])
        for i in range(0, len(grid)):
            for j in range(0, len(grid[0])):
                result += min(max_for_rows[i], max_for_cols[j]) - grid[i][j]
        return result