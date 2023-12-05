class Solution {
public:
    int numberOfMatches(int n) {
        if(n==1) return 0;
        if(n==2) return 1;
        int ans=0;
        while(n>=2){
            if(n%2==0){
              ans+=n/2;
                n/=2;
            }
            else if(n%2!=0){
                ans+=n/2;
                ans++;
                n/=2;
            }
        }
        return ans;
    }
};