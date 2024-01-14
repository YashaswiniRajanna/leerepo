class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>m(26),n(26);
        for(auto i:word1){
            m[i-'a']++;
        }
         for(auto i:word2){
            n[i-'a']++;
        }
        if(m.size() != n.size()){
            return false;
            
        }
        for(int i=0;i<26;i++){
            if(m[i]==0 && n[i]>0) return false;
            if(n[i]==0 && m[i]>0) return false;

        }
        sort(m.begin(),m.end());
        sort(n.begin(),n.end());
        
        return m==n;

        
    }
};