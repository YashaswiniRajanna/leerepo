class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int &color,int &initialColor,vector<vector<int>> &visited,int &m,int &n){

        int dr[4]={0,0,-1,1};
        int dc[4]={-1,1,0,0};
        for(int i=0;i<4;i++){
            int row=sr+dr[i];
            int col=sc+dc[i];
            if(row>=0 && col>=0 && row<m && col<n && image[row][col]==initialColor && visited[row][col]!=1){
                visited[row][col]=1;
                image[row][col]=color;
                dfs(image,row,col,color,initialColor,visited,m,n);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor=image[sr][sc];
        int m=image.size(),n=image[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        visited[sr][sc]=1;
        image[sr][sc]=color;
        dfs(image,sr,sc,color,initialColor,visited,m,n);
        return image;
    }
};