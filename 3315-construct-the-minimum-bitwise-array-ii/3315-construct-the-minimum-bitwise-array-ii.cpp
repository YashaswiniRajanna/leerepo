class Solution {
public:
//     bitset<32> flip_last(bitset<32> n){
        
//     }
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);  
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(nums[i]==2){
                ans[i]=-1;
            }
            else{
                int ncopy=num;
                int count=0;
                while((1 & num)==1){
                    count++;
                    num>>=1;
                }
                ans[i]=(ncopy & (~(1<<(count-1))));
                // ans[i]= ncopy-(1<<(count-1));
                // bitset<32> ni(nums[i]);
                // cout<<ni<<endl;
                // int n=static_cast<int>(ni.to_ulong());
                // int n2=(n|(n+1))>>1;
                // cout<<"n2"<<n2<<endl;
                // bitset<32>ans=flip_last_0(ni);
                
            }

        }
        // for(int i=0;i<nums.size();i++){
        //     int ele=nums[i];
        //     int anse=(7)>>1;
        //     cout<<anse;
        //     for(int j=1;j<ele;j++){
        //         if(( j | (j+1))==ele){
        //             ans[i]=j;
        //             break;
        //         }
        //     }
        // }
        return ans;
    }
};