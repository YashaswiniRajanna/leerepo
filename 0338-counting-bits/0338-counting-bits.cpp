class Solution {
public:
    int tob(int n){
        int rem=0;
        int base=1;
        int res=0;
        while(n>0){
            rem=n%2;
            n=n/2;
            res+=rem*base;  
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0;i<n+1;i++){
         int rem=tob(i);
          res.push_back(rem);
        }
        return res;
    }
};