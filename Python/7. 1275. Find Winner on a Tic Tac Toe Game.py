class Solution:
    def tictactoe(self, moves: List[List[int]]) -> str:
        grid = [[' ']*3 for _ in range(3)]
        player = 'A'
        for row, col in moves:
            grid[row][col] = player
            if self.check_win(grid, player):
                return player
            player = 'B' if player == 'A' else 'A'
        if ' ' in grid[0] or ' ' in grid[1] or ' ' in grid[2]:
            return "Pending"
        else:
            return "Draw"
        
    def check_win(self, grid, player):
        for i in range(3):
            if grid[i][0] == grid[i][1] == grid[i][2] == player: # check rows
                return True
            if grid[0][i] == grid[1][i] == grid[2][i] == player: # check columns
                return True
        if grid[0][0] == grid[1][1] == grid[2][2] == player: # check diagonal
            return True
        if grid[0][2] == grid[1][1] == grid[2][0] == player: # check diagonal
            return True
        return False
        
moves = [[0,0],[1,1],[0,1],[0,2],[1,0],[2,0]]
solution = Solution()
result = solution.tictactoe(moves)
print(result)
