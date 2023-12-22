class Solution {
public:
    int maxScore(string s) {
        int maxi=0;
        int c0=0,c1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                c0++;
            }
             if(s[i]=='1'){
                c1++;
            }
        }
        if(c1==0){
            return c0-1;
        }
        int left=0,right=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                left++;
            }
            if(s[i]=='1'){
                right++;
            }
            int temp=left+(c1-right);
            maxi = max(temp,maxi);
        }
        
        return maxi;

        
    }
};