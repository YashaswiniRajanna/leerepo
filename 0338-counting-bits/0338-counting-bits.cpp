class Solution {
public:
    int cdtb(int n){
        int rem=0,res=0;
        
        while(n!=0){
            rem=n%2;
            n=n/2;
            res=res+rem;
        }
       return res; 
    }
    vector<int> countBits(int n) {
        vector<int> ret;
        for(int i=0;i<=n;i++){
            int no1=cdtb(i);
            ret.push_back(no1);
        }
        return ret;
    }
};