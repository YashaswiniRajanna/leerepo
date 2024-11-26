class Solution {
public:
    bool valid(string s){
        if(s.size()==0) return true;
        cout<<endl;
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        if(s.size()==0) return true;
        string res1="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                res1+=(tolower(s[i]));
            } 
        }
        return valid(res1);
        
    }
};