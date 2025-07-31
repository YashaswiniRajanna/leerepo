class Solution {
public:
    void dfs(int node,vector<int> adj [],vector<int>&visit){
        visit[node]=1;
        cout<<"nothing\n";
        for(auto i: adj[node]){
            if(!visit[i]){
                dfs(i,adj,visit);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int ans=0;
        vector<int> visit(n);
        vector<int> adj [n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]!=0){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        cout<<"nothing"<<endl;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                cout<<"nothing\n";
                ans++;
                dfs(i,adj,visit);
            }
        }
        return ans;

    }
};