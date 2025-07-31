class Solution {
private: 
    void dfs(vector<vector<int>> &visited,int r,int c,vector<vector<int>>& grid,vector<pair<int,int>>&ve,int br,int bc){
        int m=grid.size(),n=grid[0].size();
        visited[r][c]=1;
        int dr[4]={0,0,-1,1};
        int dc[4]={-1,1,0,0};

        for(int i=0;i<4;i++){
            int rc=r+dr[i];
            int cc=c+dc[i];
            if(rc>=0 && cc>=0 && rc<m && cc<n && !visited[rc][cc] && grid[rc][cc]==1){
                ve.push_back({rc-br,cc-bc});
                dfs(visited,rc,cc,grid,ve,br,bc);
            }

        }

    }
public:
    int numDistinctIslands(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        set<vector<pair<int,int>>>se;
        // queue<pair<int,int>>q;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(visited[i][j]==0 && grid[i][j]==1){
        //             visited[i][j]=1;
        //             q.push({i,j});
                    
        //         }
        //     }
        // }
        // while(!q.empty()){

        // }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==0 && grid[i][j]==1){
                    visited[i][j]=1;
                    vector<pair<int,int>>ve;
                    dfs(visited,i,j,grid,ve,i,j);
                    se.insert(ve);
                }
            }
        }
        return se.size();
    }
};