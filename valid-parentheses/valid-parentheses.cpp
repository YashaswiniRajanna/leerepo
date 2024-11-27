class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0) return true;
        if(s.size()%2!=0) return false;
        vector<char> v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                v.push_back(s[i]);
            }
            else if(s[i]=='}' || s[i]==']' ||s[i]==')'){
                if(v.empty()){
                    return false;
                }
                else{
                    char last_one=v.back();
                    if(last_one =='{' && s[i]=='}'){
                        v.pop_back();
                    }
                    else if(last_one =='[' && s[i]==']'){
                        v.pop_back();
                    }
                    else if(last_one =='(' && s[i]==')'){
                          v.pop_back();
                    }
                    else{
                          return false;
                     }   
                }
                
                }
            }  
        return v.empty()? true:false;
    }
};