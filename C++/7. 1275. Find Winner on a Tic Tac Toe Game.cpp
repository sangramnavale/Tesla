#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> grid(3, vector<char>(3, ' '));
        char player = 'A';
        for (auto& move : moves) {
            grid[move[0]][move[1]] = player;
            if (check_win(grid, player)) {
                return string(1, player);
            }
            player = player == 'A' ? 'B' : 'A';
        }
        if (grid[0][0] == ' ' || grid[0][1] == ' ' || grid[0][2] == ' ' ||
            grid[1][0] == ' ' || grid[1][1] == ' ' || grid[1][2] == ' ' ||
            grid[2][0] == ' ' || grid[2][1] == ' ' || grid[2][2] == ' ') {
            return "Pending";
        }
        else {
            return "Draw";
        }
    }
    
private:
    bool check_win(vector<vector<char>>& grid, char player) {
        for (int i = 0; i < 3; i++) {
            if (grid[i][0] == player && grid[i][1] == player && grid[i][2] == player) { // check rows
                return true;
            }
            if (grid[0][i] == player && grid[1][i] == player && grid[2][i] == player) { // check columns
                return true;
            }
        }
        if (grid[0][0] == player && grid[1][1] == player && grid[2][2] == player) { // check diagonal
            return true;
        }
        if (grid[0][2] == player && grid[1][1] == player && grid[2][0] == player) { // check diagonal
            return true;
        }
        return false;
    }
};

int main() {
    Solution solution;
    
    // Play a game of Tic Tac Toe
    vector<vector<int>> moves = {{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}};
    string result = solution.tictactoe(moves);
    cout << "Result: " << result << endl;
    
    return 0;
}
