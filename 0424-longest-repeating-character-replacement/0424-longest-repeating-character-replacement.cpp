class Solution {
public:
    int characterReplacement(string s, int k) {
        // unordered_map<char,int>m;
        vector<int>m (26,0);
        int res=0,maxc=0,start=0,end=0;
        while(end<s.size()){
            m[s[end]-'A']++;
            maxc=max(maxc,m[s[end]-'A']);
            while((end-start+1)-maxc>k){
                m[s[start]-'A']--;
                start++;
            }
            res=max(res,end-start+1);
            end++;
        }

        return res;
    }
};