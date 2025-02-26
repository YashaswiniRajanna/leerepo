class Solution {
public:
    bool check(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        string ans="";
        for(auto i: s){
            if(isalnum(i)){
                ans+=tolower(i);
            }
        }
        cout<<ans<<endl;
        return check(ans);
    }
};