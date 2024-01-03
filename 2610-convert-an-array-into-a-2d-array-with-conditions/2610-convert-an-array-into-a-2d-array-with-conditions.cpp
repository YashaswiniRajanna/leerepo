class Solution {
public:
 vector<vector<int>> findMatrix(vector<int>& nums) {
     vector<vector<int>> res;
     // sort(nums.begin(),nums.end());
     for(auto &num : nums){
         bool inserted=false;
         for(auto &row:res){
             if(find(row.begin(),row.end(),num) == row.end()){
                 row.push_back(num);
                 inserted=true;
                 break;
             }
         }
         if(!inserted){
             res.push_back({num});
         }
     }
     return res;
 }
};
    
//     std::vector<std::vector<int>> result;

//     for (int num : nums) {
//         bool inserted = false;
//         for (auto& row : result) {
//             if (std::find(row.begin(), row.end(), num) == row.end()) {
//                 row.push_back(num);
//                 inserted = true;
//                 break;
//             }
//         }

//         // If the current number couldn't be inserted into existing rows, create a new row
//         if (!inserted) {
//             result.push_back({num});
//         }
//     }

//     return result;  
        
    // }
