class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n){
            if(n&1){
                ans++;
                
            }
            n=n>>1;
        }
        return ans;
        
    }
};



// public class Solution {
//     // you need to treat n as an unsigned value
//     public int hammingWeight(int n) {
//         int ones = 0;
//         ones += (n & 1);
//         n >>>= 1;
//         while(n > 0){
//             ones += (n & 1);
//             n >>= 1;
//         }
//         return ones;
//     }
// }