class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        // unordered_map<int,int> m;
        // for(auto i: matches ){
        //     if(i.second())
        // }
        int fw[1000001]={0};
        int fl[1000001]={0};

        vector<vector<int>> m(2);
        int i=0;
        for(int  i=0; i<matches.size();i++){
        fw[matches[i][0]]++;
        fl[matches[i][1]]++;
        }
        
    for(int i=1;i<=100000;i++){
        if(fw[i]+fl[i]>0){
           if(fl[i]==0){
               m[0].push_back(i);
           }
            else if(fl[i]==1){
                 m[1].push_back(i);

            }
            
            
        }
    }

    return m;
    }
};