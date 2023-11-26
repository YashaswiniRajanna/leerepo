class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& w) {
        int count=0;
        for(int i=0;i<w.size()-1;i++){
            for(int j=i+1;j<w.size();j++){
                if(w[i][0]==w[j][1] && w[i][1]==w[j][0]){
                    count++;
                }
                
            }
        }
       return count++; 
    }
};