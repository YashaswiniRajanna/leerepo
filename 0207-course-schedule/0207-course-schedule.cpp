class Solution {
public:
    bool dfs(int &node,vector<vector<int>>& adj,stack<int>& st,vector<int>&visit,vector<int>&pathvisit){
        visit[node]=1;
        pathvisit[node]=1;
        for(auto i: adj[node]){
            if(!visit[i]){
                if(!dfs(i,adj,st,visit,pathvisit)) return false;
            }
            else if(pathvisit[i]){
                return false;
            }
        }
        st.push(node);
        pathvisit[node]=0;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        stack<int> st;
        vector<int> topo;
        vector<int> visit(numCourses,0);
        vector<int> pathvisit(numCourses,0);
        vector<vector<int>>adj(numCourses,vector<int>{});
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<numCourses;i++){
            if(!visit[i]){
                if(!dfs(i,adj,st,visit,pathvisit)){
                    return false;
                }
            }
        }
    
        if(numCourses < st.size()){
            return false;
        }
        return true;
        // queue<int>q;
        // vector<int> toporder;
        // vector<int>ingress(numCourses,0);
        // vector<vector<int>>adj(numCourses,vector<int>{});
        // for(int i=0;i<prerequisites.size();i++){
        //     adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        // }
        // for(int i=0;i<prerequisites.size();i++){
        //     ingress[prerequisites[i][0]]++;
        // }
        // for(int i=0;i<ingress.size();i++){
        //     if(ingress[i]==0){
        //         q.push(i);
        //     }
        // }
        // while(!q.empty()){
        //     int node =q.front();
        //     q.pop();
        //     toporder.push_back(node);
        //     for(auto i: adj[node]){
        //         ingress[i]--;
        //         if(ingress[i]==0) q.push(i);
        //     }
        // }
        // if(toporder.size() < numCourses){
        //     return false;
        // }
        // return true;
 
    }
};