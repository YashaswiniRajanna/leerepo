class Solution {
public:
    int pivotInteger(int n) {
        int res=-1;
        vector<int>r1;
        vector<int>r2;
        for(int i=1;i<=n;i++){
            int sum1=0,sum2=0;
            for(int k=1;k<=i;k++){
                sum1+=k;
            }
             for(int g=i;g<=n;g++){
                sum2+=g;
            }
            if(sum1==sum2){
               res=i;
                break;
            }
            
        }
        return res;
    }
};