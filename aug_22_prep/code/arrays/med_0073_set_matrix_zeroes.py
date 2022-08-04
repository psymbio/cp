class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        zero_rows = [0]*len(matrix)
        zero_cols = [0]*len(matrix[0])
    
        for i in range(0, len(matrix)):
            for j in range(0, len(matrix[0])):
                if matrix[i][j] == 0:
                    zero_rows[i] = 1
                    zero_cols[j] = 1        
        for i in range(0, len(matrix)):
            for j in range(0, len(matrix[0])):
                if zero_rows[i] == 1:
                    matrix[i][j] = 0
                if zero_cols[j] == 1:
                    matrix[i][j] = 0
        return matrix