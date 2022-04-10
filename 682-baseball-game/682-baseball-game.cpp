class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        vector<int>res;
        int ans=0;
        for(string i:ops){
            if(i=="+")res.push_back(res[res.size()-2]+res[res.size()-1]);
             else if(i=="D")   res.push_back(res[res.size()-1]*2);
                else if(i=="C")res.pop_back();
                          
                  else 
                        res.push_back(stoi(i));
                    
            }
            return accumulate(res.begin(),res.end(),0);
        }
        
};
//stack method can also be used