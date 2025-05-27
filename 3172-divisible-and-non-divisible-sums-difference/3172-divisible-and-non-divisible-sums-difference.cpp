class Solution {
public:
    int differenceOfSums(int n, int m) {
        int nsum=0,msum=0;;
        for(int i=0;i<=n;i++){
            if(i%m!=0){
                nsum+=i;
            }
            if(i%m==0){
                msum+=i;
            }
        }
    return nsum-msum;
    }
};