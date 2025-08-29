class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m=heights.size(),n=heights[0].size();
        vector<vector<int>>dist(m,vector<int>(n,INT_MAX));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        int vrow[4]={0,0,-1,1};
        int vcol[4]={-1,1,0,0};

        q.push({0,{0,0}});
        dist[0][0]=0;
        while(!q.empty()){
            int max_dis=q.top().first;
            int row=q.top().second.first;
            int col=q.top().second.second;
            q.pop();
            if(row==m-1 && col==n-1){
                return max_dis;
            }
            for(int i=0;i<4;i++){
                int drow=row+vrow[i];
                int dcol=col+vcol[i];
                if(drow>=0 && drow<m && dcol>=0 && dcol<n){
                    int new_max_dis=max(max_dis,abs(heights[drow][dcol]-heights[row][col]));
                    if(dist[drow][dcol]>new_max_dis){
                        dist[drow][dcol]=new_max_dis;
                        q.push({new_max_dis,{drow,dcol}});
                    }
                }
            }

        }
        return -1;
    }
};