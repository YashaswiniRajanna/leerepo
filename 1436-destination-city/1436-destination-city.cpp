class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
         unordered_set<string> s;
        for(auto path:paths){
            s.insert(path[0]);
        }
        for(auto dest:paths){
            if(s.find(dest[1])==s.end()){
                return dest[1];
            }
        }
        return "";
    }
};