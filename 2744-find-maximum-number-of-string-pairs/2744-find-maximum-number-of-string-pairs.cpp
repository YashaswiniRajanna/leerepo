class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
       unordered_map<string,int> m;
        int count=0;
        for(auto w: words ){
           string r=w;
            reverse(w.begin(),w.end());
            if(m[r]>0)
            {
                m[r]--;
                count++;
            }
            else{
                m[w]++;
            }
            
        }
       return count;
    }
};