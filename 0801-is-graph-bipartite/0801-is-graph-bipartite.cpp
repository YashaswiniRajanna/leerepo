class Solution {
public:
    bool isBipartite(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>colors(n,-1);
        bool colo=0;
        cout<<colo;
        for(int i=0;i<n;i++){
            queue<pair<int,bool>>q;
            if(colors[i]==-1){
                 q.push({i,!colo});
                 while(!q.empty()){
                    int val=q.front().first;
                    bool col=q.front().second;
                    q.pop();
                    for(auto i: grid[val]){
                        if(colors[i]==-1){
                             colors[i]=!col;
                             q.push({i,colors[i]});
                        }
                        if(colors[i]==col){
                            return false;
                        }
                    }

                }

            }
        }
        return true;
    }
};