class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    bool cond=false;
     for(int i=0;i<matrix.size();i++){
         for(int j=0;j<matrix[0].size();j++){
             if(target==matrix[i][j])
                 return true;
         }
     } 
    return cond;
    }
};