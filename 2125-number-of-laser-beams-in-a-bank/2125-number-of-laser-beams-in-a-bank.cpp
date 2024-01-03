class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count=0;
        vector<int>row;
    
        for( int i=0;i<bank.size();i++){
            int no1=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j] == '1'){
                    no1++;
                }
            }
            if(no1!=0){
            row.push_back(no1); 
            }
        }
        if(row.size()==0) return 0;
        if(row.size()==1){
            if(bank[0][0]=='0') return 0;
            if(bank[0][0]=='1') return 0;

        }
         for(int i=0;i<row.size()-1;i++){
                 count=count+row[i]*row[i+1];
             }
         
      return count;
    }
};