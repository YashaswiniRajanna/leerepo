class Solution {
public:
    int totalMoney(int n) {
        int m=0;
        int k=1,st=1;
        k=st;
        int ans=0;
       while(n--){
           ans+=k;
           k++;
           m++;
           if(m==7){
               st+=1;
               k=st;
               m=0;
           }
           
       }
        return ans;
    }
};