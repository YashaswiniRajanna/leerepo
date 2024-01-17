class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int> oc;
        for(const auto &i: arr){
            m[i]++;
        }
        for(auto i :m){
            oc.push_back(i.second);  

        }
        sort(oc.begin(),oc.end());
        for(int i=1;i<oc.size();i++){
           if(oc[i]==oc[i-1]){
               return false;
           }
        }
        return true;
    }
};