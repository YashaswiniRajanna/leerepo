class Solution {
public:
    int myAtoi(string s) {
        long num=0;
        string res="";
        string operads="";
        bool negative=false;
        int j;
        for(j=0;j<s.size();j++){
            if(s[j]==' '){
                continue;
            }
            else{
                break;
            }
        }
        for(int i=j;i<s.size();i++){
            if(s[i]=='-' || s[i]=='+'){
                if(res.empty() && s[i]=='-' && operads.empty()){
                    negative=true;
                    operads+=s[i];
                }
                else if(res.empty() && s[i]=='+' && operads.empty()){
                    negative=false;
                    operads+=s[i];

                }
                else{
                    break;
                }
            }
            else if(isdigit(s[i])){
                res+=s[i];
            }
            else{
                break;
            }
        }
        cout<<res<<" ";
        if(res.empty()) return 0;

        else{
            // num=stol(res);
            int l=0;
            while(l<res.size()){
                num = num * 10 + (res[l]-'0');
                if (num > INT_MAX) {
                    return negative ? INT_MIN : INT_MAX;
                }

                l++;
            }
            if(num<= INT_MAX) {
                return negative? -1*num:num;
            }
            else if( num>INT_MAX){
                return negative? INT_MIN :INT_MAX;

            }
        }
        return num;
    }
};