class TicTacToe {
private:
    vector<vector<char>> board;
public:
    TicTacToe(int n) {
        // this->dim=n;
        // int i=0;
        // vector<char> temp(n);
        this->board=vector<vector<char>>(n,vector<char>(n,'-1'));
        // while(i<n){
        //     board.push_back(temp);
        //     i++;
        // }
    }
    
    int move(int row, int col, int player) {
        //  1->X  2->O
        char val=(player==1) ? 'X':'O';
        this->board[row][col]= val;
        // int size=this->dim;
        int size=this->board.size();
        bool horizontal=true,vertical=true,diagonal_left=true,diagonal_right=true;
        for(int i=0;i<size;i++){
           if(this->board[i][col]!=val){
                vertical=false;
            } 
        }
        for(int j=0;j<size;j++){
           if(this->board[row][j]!=val){
                horizontal=false;
            } 
        }
        for(int i=0;i<size;i++){
               if(this->board[i][i]!=val){
                    diagonal_left=false;
                } 
                if(this->board[i][size-1-i]!=val){
                        diagonal_right=false;
                } 
            }
        if(horizontal || vertical || diagonal_left || diagonal_right){
                return player;
            }
        else{
            return 0;
        }
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */