class Solution {
public:
    // void dfs(int &node,vector<vector<int>>& adj,stack<int>& st,vector<int>&visit){
    //     for(auto i: adj[node]){
    //         if(!visit[i]){
    //             visit[i]=i;
    //             dfs(i,adj,st,visit);
    //         }
    //     }
    //     st.push(node);
    // }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int>q;
        vector<int> toporder;
        vector<int>ingress(numCourses,0);
        vector<vector<int>>adj(numCourses,vector<int>{});
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<prerequisites.size();i++){
            cout<<endl;
            cout<<prerequisites[i][0]<<prerequisites[i][1]<<endl;
            ingress[prerequisites[i][0]]++;
        }
        for(int i=0;i<ingress.size();i++){
            if(ingress[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node =q.front();
            q.pop();
            toporder.push_back(node);
            for(auto i: adj[node]){
                ingress[i]--;
                if(ingress[i]==0) q.push(i);
            }
        }
        if(toporder.size() == numCourses){
            return true;
        }
        cout<<toporder.size();
        return false;
        // stack<int> st;
        // vector<int> visit(numCourses,0);
        // vector<vector<int>>adj(numCourses,vector<int>{});
        // for(int i=0;i<prerequisites.size();i++){
        //     adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        // }
        // for(int i=0;i<numCourses;i++){
        //     if(!visit[i]){
        //         visit[i]=1;
        //         dfs(i,adj,st,visit);
        //     }
        // }
        // cout<<st.size();
        // if(numCourses > st.size()){
        //     return false;
        // }
        // return true;
    }
};