class Solution {
public:
    bool check(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string si) {
        string s="";
        for(auto i: si){
            if(isalnum(i)){
                s+=tolower(i);
            }
        }
        cout<<s;
        return check(s);
    }
};