class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        queue<pair<int,int>> q;
        vector<int>visited(n,0);
        q.push({0,-1});
        visited[0]=1;
        while(!q.empty()){
            int val=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto i: adj[val]){
                if(!visited[i]){
                    visited[i]=1;
                    q.push({i,val});
                }
                else{
                    if(parent!= i){
                        return false;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};