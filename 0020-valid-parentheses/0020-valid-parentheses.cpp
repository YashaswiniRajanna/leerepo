// #bharath2
class Solution {
public:
    bool isValid(string s) {
        vector<char> last;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                last.push_back(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(last.empty()) return false;
                else{
                    char top=last.back();
                    cout<<top;
                    if((top=='(' && s[i]==')') || (top=='{' && s[i]=='}') || (top=='[' && s[i]==']')){
                        last.pop_back();
                    }
                    else{
                        return false;
                    }
                }  
            }
              
        }
        return last.empty();
    }
};