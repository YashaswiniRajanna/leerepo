class Solution {
public:
    vector<string> mostVisitedPattern(vector<string>& username, vector<int>& time, vector<string>& website) {
        if(time.size()==1 || time.size()==0){
            return username;
        }
        vector<pair<int,pair<string,string>>> v3;
        for(int i=0;i<time.size();i++){
           v3.push_back({time[i],{username[i],website[i]}});
        }
        sort(v3.begin(),v3.end(),[](const pair<int,pair<string,string>>&a,pair<int,pair<string,string>>&b){
            return a.first <b.first;
        });
        map<string,vector<string>>m;
        for(auto i: v3){
            m[i.second.first].push_back(i.second.second);
        }
        map<vector<string>,int>scores;
        for(auto i: m){
            string user=i.first;
            vector<string> websites=i.second;
            if(websites.size()<3) continue;
            
            set<vector<string>> pattern;
            for(int i=0;i<websites.size()-2;i++){
                for(int j=i+1;j<websites.size()-1;j++){
                    for(int k=j+1;k<websites.size();k++){
                        pattern.insert({websites[i],websites[j],websites[k]});
                    }
                }
            }
            for(auto i: pattern){
                scores[i]++;
            }
        }
        int maxi=INT_MIN;
        vector<vector<string>>res;
        for(auto i: scores){
            // maxi=max(maxi,i.second);
            if(maxi<i.second){
                maxi=i.second;
                cout<<i.first[0]<<i.second<<endl;
                res.push_back(i.first);
            }
        }
        return res.back();
    }
};