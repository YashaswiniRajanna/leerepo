// class Solution {
// public:
//     int onesrow(vector<vector<int>>& grid,int i){
//         int count=0;
//          for(int j=0;j<grid.size();j++){
//              if(grid[i][j]==1) count++;
//          }
//         return count;
//     }
//     int onesCol(vector<vector<int>>& grid,int j){
//         int count=0;
//          for(int i=0;i<grid[0].size();i++){
//              if(grid[i][j]==1) count++;
//          } 
//          return count;
//     }
//     int zerosRow(vector<vector<int>>& grid,int i){
//         int count=0;
//          for(int j=0;j<grid.size();j++){
//              if(grid[i][j]==0) count++;
//          }
//          return count;
//     }
        
// int zerosCol(vector<vector<int>>& grid,int j){
//           int count=0;
//          for(int i=0;i<grid[0].size();i++){
//              if(grid[i][j]==0) count++;
//          } 
//          return count;
//     }
//     vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
//         int m=grid.size(),n=grid[0].size();
//         vector<vector<int>> dif(m,vector<int>(n));
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 int onesrow0=onesrow(grid,i);cout<<onesrow0<<endl;
//                 int onesCol0=onesCol(grid,j);cout<<onesCol0<<endl;
//                 int zerosRow0=zerosRow(grid,i);cout<<zerosRow0<<endl;
//                 int zerosCol0=zerosCol(grid,j);cout<<zerosCol0<<endl;
//                 dif[i][j]=(onesrow0 + onesCol0 - zerosRow0 - zerosCol0); cout<<dif[i][j]<<endl;
//             }
//         }
//         // for(int i=0;i<dif.size();i++){
//         //     for(int j=0;j<dif[0].size();j++){
//         //         cout<<dif[i][j];
//         //     }
//         // }
//         return dif;
            
//     }
// };

class Solution {
public:
 vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
      int row = grid.size(),col=grid[0].size();
        vector<vector<int>> diff(row,vector<int>(col,0));
        vector<int> rowCount(row,0),colCount(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==0){
                    rowCount[i]--;
                    colCount[j]--;
                }
                else{
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                diff[i][j] = rowCount[i] + colCount[j];
            }
        }
        return diff;
 }
};