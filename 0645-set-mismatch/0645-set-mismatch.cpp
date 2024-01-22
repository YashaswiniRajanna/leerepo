class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
                int n=nums.size();
        int actual_sum=n*(n+1)/2;
        int arr_sum=0;
        int unique_sum=0;

        set<int>s;

        for(auto it:nums){
            arr_sum+=it;
        }

        for(auto it:nums){
            s.insert(it);
        }
        for(auto it:s){
            unique_sum+=it;
        }

        int miss=actual_sum-unique_sum;
        int duplicate=arr_sum-unique_sum;

        return {duplicate,miss};
//         // nums.sort(nums.begin(),nums.end());
//         int prev=nums[0];
//         vector<int> res;
//         unordered_map<int,int>m;
//         for(const auto &i:nums){
//             m[i]++;
//             cout<<i<<endl;
//         }
      
//         for(int i=1;i<nums.size();i++){
//             if(prev==nums[i]){
//                 res.push_back(nums[i]);
//             }
//             prev=nums[i];
//         }
//           for(int i=1;i<=nums.size();i++){
//               // cout<<i<<" "<<m.find(i)<<endl;
//             if(m.find(i)==m.end()){
//                 res.push_back(nums[i]-1);
//                 cout<<nums[i];
//             }
//         }
       
//         return res;
    }
};