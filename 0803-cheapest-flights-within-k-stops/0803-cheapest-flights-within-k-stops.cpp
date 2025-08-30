class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>edges(n);
        for(int i=0;i<flights.size();i++){
            int u=flights[i][0],v=flights[i][1],w=flights[i][2];
            edges[u].push_back({v,w});
        }
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>>pq;
        vector<int> distance(n,INT_MAX);
        distance[src]=0;
        pq.push({0,{src,0}});
        while(!pq.empty()){
            int stop=pq.top().first;
            int node=pq.top().second.first;
            int dist=pq.top().second.second;
            pq.pop();
            // if(stop>k) continue;
            for(auto i: edges[node]){
                int next_weight=i.second,next_node=i.first;
                if(dist+next_weight< distance[next_node] && stop<=k){
                    distance[next_node]= dist+next_weight;
                    pq.push({stop+1,{next_node,dist+next_weight}});
                }
            }

        }
        cout<<endl;
        for(auto i: distance){
            cout<<i<<endl;
        }
        if(distance[dst]==INT_MAX)return -1;
        return distance[dst];
    }
};