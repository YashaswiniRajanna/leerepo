class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> distance(m,vector<int>(n,INT_MAX));
        queue<pair<int,pair<int,int>>>q;
        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
        if(n==1 || m==1) return 1;
        distance[0][0]=1;
        q.push({1,{0,0}});
        int vrow[8]={-1,-1,-1,0,0,1,1,1};
        int vcol[8]={-1,0,1,-1,1,-1,0,1};

        while(!q.empty()){
            int dist=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
            q.pop();
            for(int i=0;i<8;i++){
                int drow=row+vrow[i];
                int dcol=col+vcol[i];
                if(drow>=0 && drow<m && dcol>=0 && dcol<n && grid[drow][dcol]==0 && distance[drow][dcol]>dist+1){
                  distance[drow][dcol]=dist+1;
                  if(drow==m-1 && dcol==n-1){
                    return dist+1;
                  }  
                  q.push({distance[drow][dcol],{drow,dcol}});
                }

            }
        }
    return -1;
    }
};