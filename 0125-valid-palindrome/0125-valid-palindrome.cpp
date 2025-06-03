class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                res+=tolower(s[i]);
            }
        }
        int start=0,end=res.size()-1;
        while(start<end){
            if(res[start]!=res[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};