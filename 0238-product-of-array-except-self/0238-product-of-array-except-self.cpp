class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int i=0,j=0;
        int nres=1;
        bool flag=false;
        // unordered_map<int,int> res;
        int no_of_0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
            nres=nres*nums[i];
            }
            if(nums[i]==0){
               flag= true; 
                no_of_0++;
            }
        }
        cout<<no_of_0;
        if(no_of_0 > 1){
             for(int i=0;i<nums.size();i++){
                  res.push_back(0);
             }
            }
        else{
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 ){
                res.push_back(nres);
            }
            else if(flag && nums[i]!=0){
                res.push_back(0);
            }
            
            else{
            res.push_back(nres/nums[i]);
            }
        }
        }
//         for(int i=0;i<nums.size();i++){
//             int nres=1;
//             for(int j=0;j<nums.size();j++){
//                 if(i!=j){
//                     nres=nres*nums[j];
//                 }
//             }
//             res.push_back(nres);
            
//         }
        return res;
    }
};