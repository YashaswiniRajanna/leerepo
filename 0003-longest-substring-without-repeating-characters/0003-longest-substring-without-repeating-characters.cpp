class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0,end=0;
        unordered_set<char>se;
        int n=s.size();
        int maxx=0;
        for(int end=0;end<n;end++){
            if(se.count(s[end])==0){
                se.insert(s[end]);
                maxx=max(maxx,end-start +1);
            }
            else{
                while(se.count(s[end])!=0){
                    se.erase(s[start]);
                    start++;
                }
                se.insert(s[end]);
                // se[starr]=s[end];
            }
        }
        return maxx;
    }
};