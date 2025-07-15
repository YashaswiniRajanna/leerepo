class Solution {
public:
    void bfs(vector<vector<int>>& grid,vector<vector<int>>& visited,queue<pair<pair<int,int>,int>>&q,int &tmax){
        int m=grid.size(),n=grid[0].size();
        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tmax=max(t,tmax);

            int dx[4]={0,0,1,-1};
            int dy[4]={-1,1,0,0};
            for(int i=0;i<4;i++){
                int row=x+dx[i];                
                int col=y+dy[i];                
                if(row>=0 && row<m && col>=0 && col<n && grid[row][col]==1 && visited[row][col]!=2){
                    q.push({{row,col},t+1});
                    grid[row][col]=2;
                    visited[row][col]=2;
                }
            }

        }
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int tmax=0;
        // int visited[m][n]={0};
        vector<vector<int>>visited (m,vector<int>(n,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    visited[i][j]=2;
                    q.push({{i,j},0});
                }
            }
        }
        bfs(grid,visited,q,tmax);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 ){
                    return -1;
                }
            }
        }
        return tmax;
    }
};