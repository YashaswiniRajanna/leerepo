class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0|| i==m-1 ||j==n-1) && board[i][j]=='O'){
                    visited[i][j]=1;
                    q.push({i,j});
                }
            }
        }
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int drow=row+dr[i];
                int dcol=col+dc[i];
                if(drow>=0 && dcol>=0 && drow<m && dcol<n && visited[drow][dcol]==0 && board[drow][dcol]=='O'){
                    visited[drow][dcol]=1;
                    q.push({drow,dcol});
                }
                
            }

        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==0 && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        return;
    }
};