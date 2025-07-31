class Solution {
private:
    void dfs(vector<int> &visited,int &v,vector<vector<int>> &adj){
        visited[v]=1;
        cout<<"v"<<v<<"visited"<<visited[v]<<endl;
        for(auto i : adj[v]){
            if(!visited[i]) dfs(visited,i,adj);
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> visited(n+1,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                cout<<"i"<<i<<" ";
                dfs(visited,i,adj);
                count++;
            }
        }
        return count;
    }
};
// [1,0,0,0]