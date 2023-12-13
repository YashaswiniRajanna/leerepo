class Solution {
public:
    bool fun(vector<vector<int>>& mat,int rowi,int coli ){
        int m=mat.size(), n=mat[0].size();
        for(int i=0;i<rowi;i++){
           if(mat[i][coli]==1){
               return false;
           }
        }
        for(int i=0;i<coli;i++){
           if(mat[rowi][i]==1){
               return false;
           }
        }
        for(int i=rowi+1;i<m;i++){
            if(mat[i][coli]==1){
                return false;
            }
        }
        for(int i=coli+1;i<n;i++){
            if(mat[rowi][i]==1){
                return false;
            }
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int n1=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    if(fun(mat,i,j)){
                        n1++;
                    }
                 
                }
            }
        }
        
        return n1;
        
    }
};