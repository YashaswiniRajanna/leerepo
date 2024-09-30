class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //O(N* k logk)=>n-no of elements in strs, k -> maximum string hile sorting
        // unordered_map<string,vector<string>> m;
        // vector<vector<string>> res;
        // for(auto s:strs){
        //     string unsorted_str=s;
        //     sort(s.begin(),s.end());
        //     m[s].push_back(unsorted_str);
        // }
        // for(auto i:m){
        //     res.push_back(i.second);
        // }
        // return res;
        
        vector<vector<string>>res;
        unordered_map <string,vector<string>> m;
        for(auto i: strs){
            string r="";
            int  c[26]={0};
            for(auto j :i){
                c[j-'a']++;
            }
            for(int j=0;j<26;j++){
                r+= "#"+ to_string(c[j]);
            }
            m[r].push_back(i);
        }
        for(auto i: m){
            res.push_back(i.second);
        }
        return res;
    }
};