class Solution {
public:
    void dfs(vector<vector<int>> &visit,vector<vector<char>>&grid, int i,int j){
        visit[i][j]=1;
        int m=grid.size(),n=grid[0].size();
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int dx[4]={0,0,-1,1};
            int dy[4]={-1,1,0,0};

            for(int k=0;k<4;k++){
                int dr=row+dx[k];
                int dc=col + dy[k];
                if(dr>=0 && dr<m && dc>=0 && dc<n && !visit[dr][dc] && grid[dr][dc]=='1'){
                    q.push({dr,dc});
                    visit[dr][dc]=1;
                }
            }
        }   
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> visit(m,vector<int>(n,0));
        
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visit[i][j] && grid[i][j]=='1'){
                    count++;
                    dfs(visit,grid,i,j);
                }
            }
        }
        return count;
    }
};