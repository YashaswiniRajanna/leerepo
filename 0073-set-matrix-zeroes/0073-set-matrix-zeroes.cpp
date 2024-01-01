class Solution {
public:
    bool check(vector<int> temp,int index){
        
//         for(int i=0;i<temp.size();i++){
//             if(index=temp[i]){
//                 return 
//             }
        bool tempe=false;
        if(find(temp.begin(),temp.end(),index) != temp.end()){
            tempe=true;
        }
        return tempe;
        }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int>col;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){

            if(matrix[i][j]==0){
                row.push_back(i);
                col.push_back(j);
                }
        }
        }
        for(int i=0;i<row.size();i++){
            cout<<"i"<<" "<<row[i];
            cout<<"j"<<" "<<col[i];

        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(check(row,i) || check(col,j)){
                    matrix[i][j]=0;
                }
            }
        }
    }
};