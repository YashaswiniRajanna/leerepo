// class Solution {
// public:
//     vector<vector<int>>  subsetsWithDup(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>> res;
//         set<vector<int>> res2;
//         for(int i=0;i<(1<<n);i++){
//             vector<int> sub;
//             for(int j=0;j<n;j++){
//                 if( i & (1<<j)){
//                     sub.push_back(nums[j]);
//                 }
//             }
//             // res.push_back(sub);
//             res2.insert(sub);
//         }
//         for (auto i:res2){
//             res.push_back(i);
//         }

//         return res;a
//     }
// };
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        unordered_map<int,int>m;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < (1 << n); i++) {
            vector<int> sub;
            int sum=0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    sub.push_back(nums[j]);
                    // cout<<nums[j];
                }

            }

            // sum=accumulate(sub.begin(),sub.end(),0);
            // if(m.find(sum)==m.end()){
                res.push_back(sub);
                // accumulate(sub.begin(),sub.end(),sum);
                // m[sum]++;
            // }

            
        }
        set<vector<int>>s;
        for(auto i:res){
            s.insert(i);
        }
        vector<vector<int>>res2;
        for(auto i :s){
            res2.push_back(i);
        }   
       
        // if(nums.size()==1){
        //  vector<int> res3;
        //     if(nums[0]==0){
        //     res3.push_back(nums[0]);
        //         }
        //     res2.push_back(res3);
        // }
        
        return res2;
    }
};