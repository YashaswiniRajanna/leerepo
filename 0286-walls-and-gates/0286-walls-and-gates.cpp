class Solution {
public:
    int walls=-1;
    int gate=0;
    int empty=INT_MAX;  
    void wallsAndGates(vector<vector<int>>& rooms) {
        int m=rooms.size(),n=rooms[0].size();
        if(m==0 && n==0){return ;}
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rooms[i][j]==gate){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int cr=q.front().first;
            int cc=q.front().second;
            q.pop();
            int rows[4]={-1,1,0,0};
            int cols[4]={0,0,-1,1};

            for(int i=0;i<4;i++){
                int row=cr+rows[i];
                int col=cc+cols[i];
                if(row>=0 && row<m && col>=0 && col<n && rooms[row][col]==empty){
                    rooms[row][col]=rooms[cr][cc]+1;
                    q.push({row,col});
                }
            }
        }
    }
};