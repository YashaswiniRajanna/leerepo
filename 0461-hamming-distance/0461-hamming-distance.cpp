class Solution {
public:
    int binaryto(int ans){
        int count=0;
        while(ans>0){
        int n=ans%2;
            count+=n;
            cout<<ans;
            ans/=2;
        } 
        return count;
        
    }
    int hammingDistance(int x, int y) {
        
        int ans= binaryto(x ^ y);
        return ans;
    }
};