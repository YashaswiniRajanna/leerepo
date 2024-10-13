class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                char elem=board[i][j];
                if(elem == '.'){
                    continue;
                }
                if(rows[i].find(elem)!=rows[i].end()){
                    return false;
                }
                rows[i].insert(elem);
                
                if(cols[j].find(elem)!=cols[j].end()){
                    return false;
                }
                cols[j].insert(elem);
                
                int ind=(i/3)*3+(j/3);
                if(boxes[ind].find(elem)!=rows[ind].end()){
                    return false;
                }
                boxes[ind].insert(elem);
            }
        }
        return true;
    }
};