class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>m;
        int res=0,maxc=0,start=0,end=0;
        while(end<s.size()){
            m[s[end]]++;
            maxc=max(maxc,m[s[end]]);
            while((end-start+1)-maxc>k){
                m[s[start]]--;
                start++;
            }
            res=max(res,end-start+1);
            end++;
        }

        return res;
    }
};