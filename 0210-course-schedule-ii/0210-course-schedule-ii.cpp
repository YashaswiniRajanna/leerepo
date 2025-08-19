class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int>q;
        vector<int> toporder;
        vector<int>ingress(numCourses,0);
        vector<vector<int>>adj(numCourses,vector<int>{});
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<prerequisites.size();i++){
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
            return toporder;
        }
        return {};
    }
};