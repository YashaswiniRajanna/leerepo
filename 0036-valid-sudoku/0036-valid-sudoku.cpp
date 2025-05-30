class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> box[9];
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!= '.'){
                    if(rows[i].find(board[i][j])!=rows[i].end()){
                        return false;
                    }
                    rows[i].insert(board[i][j]);
                    if(cols[j].find(board[i][j])!=cols[j].end()){
                        return false;
                    }
                    cols[j].insert(board[i][j]);
                    int index=(i/3)*3+(j/3);
                    if(box[index].find(board[i][j])!=box[index].end()){
                        return false;
                    }
                    box[index].insert(board[i][j]);
                }
            }
        }
    return true;
    }
};