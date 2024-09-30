class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> res;
        for(auto s:strs){
            string unsorted_str=s;
            sort(s.begin(),s.end());
            m[s].push_back(unsorted_str);
        }
        for(auto i:m){
            res.push_back(i.second);
        }
        return res;
//         set<vector<string>>res;
//         for(int i=0;i<strs.size()-1;i++){
//             unordered_map<char,int> m1;
//             set<string>r;
//             for(auto j:strs[i]){
//                 m1[j]++;
//             }
//             for(int j=i+1;j<strs.size();j++){
//                 unordered_map<char,int> m2;
//                 for(auto j1:strs[j]){
//                     m2[j1]++;
//                 }
//                 if(m1==m2){
//                     r.insert(strs[i]);
//                     r.insert(strs[j]);
//                 }
//                 else{
//                      r.insert(strs[i]);
//                 }
//             }
//             vector<string> r2(r.begin(),r.end());
//             if(r2.size()!=0){
//                     res.insert(r2);
//             }

            
//         }
//         vector<vector<string>>ret(res.begin(),res.end());
//         for(int i=0;i<ret.size();i++){
//                 for(int j=0;j<ret[i].size();j++){
//                     cout<<ret[i][j]<<" ";
//                 }    
//         }
//         return ret;
    }
};