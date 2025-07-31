class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || i==m-1 || j==0 || j==n-1) && grid[i][j]==1){
                    q.push({i,j});
                    visited[i][j]=1;
                }
            }
        }
        int dr[4]={0,0,-1,1};
        int dc[4]={-1,1,0,0};

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int drow=row+dr[i];
                int dcol=col+dc[i];
                if(drow>=0 && dcol>=0 && drow<m && dcol<n && visited[drow][dcol]==0 && grid[drow][dcol]==1){
                    visited[drow][dcol]=1;
                    q.push({drow,dcol});
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==0 && grid[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};