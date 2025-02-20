class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows> s.size()) return s;
        // vector<string> ans(numRows,"");
        string ans[numRows];

        for(auto i: ans){
            i="";
        }
        int i=0;
        while(i<s.size()){
            for(int j=0;j<numRows && i<s.size();j++){
                ans[j]+=s[i];
                i++;
            }
            for(int k=numRows-2;k>0 && i<s.size();k--){
                ans[k]+=s[i];
                i++;
            }
        }
        for(auto i: ans){
            cout<<i<<" "<<endl;
        }
        string ret="";
        for(auto i :ans){
            ret+=i;
        }

        return ret;
    }
};