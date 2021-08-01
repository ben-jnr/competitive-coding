class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_map<char,int>> cols, rows;
        for(int i=0; i<9; i+=3) {
            for(int j=0; j<9; j+=3) {
                unordered_map<char,int> matrix;
                for(int k=i; k<3+i; k++ ) {
                    for(int l=j; l<3+j; l++) {
                        if(board[k][l] == '.')
                            continue;
                        if(rows.find(k) != rows.end() && rows[k].find(board[k][l]) != rows[k].end())
                            return false;
                        else
                            rows[k][board[k][l]] = 1;
                        if(cols.find(l) != cols.end() && cols[l].find(board[k][l]) != cols[l].end())
                            return false;
                        else
                            cols[l][board[k][l]] = 1;
                        if(matrix.find(board[k][l]) != matrix.end())
                            return false;
                        else
                            matrix[board[k][l]] = 1;
                    }
                }
                
            }
        }
        return true;
    }
};
