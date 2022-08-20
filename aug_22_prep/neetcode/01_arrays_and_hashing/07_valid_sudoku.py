class Solution:
    def isValidRow(self, board):
        for row in board:
            if self.isValidUnit(row) == False:
                return False
        return True
    
    def isValidCol(self, board):
        for col in zip(*board):
            if self.isValidUnit(col) == False:
                return False
        return True
    
    def isValidSquare(self, board):
        for i in (0, 3, 6):
            for j in (0, 3, 6):
                unit = [board[x][y] for x in range(i, i+3) for y in range(j, j+3)]
                if self.isValidUnit(unit) == False:
                    return False
        return True
        
    def isValidUnit(self, unit):
        unit = [x for x in unit if x != '.']
        return len(set(unit)) == len(unit)
    
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        return self.isValidRow(board) and self.isValidCol(board) and self.isValidSquare(board)