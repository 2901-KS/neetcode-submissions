class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int boxes[9][9] = {0};

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char ch = board[i][j];
                if (ch == '.') continue;

                int num = ch - '1'; 
                int boxIdx = (i / 3) * 3 + (j / 3); 

                if (rows[i][num]++ > 0) return false;
                if (cols[j][num]++ > 0) return false;
                if (boxes[boxIdx][num]++ > 0) return false;
            }
        }
        return true;
    }
};
