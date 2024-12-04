class Solution {
public:
    //bruteforce
    //center expansion
    bool palindrome(int start,int end,string s){
        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else {
                return false;
            }
        }
        return true;
    }
    int check(int left,int right, string &s){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int start=0,maxl=0;
        for(int i=0;i<s.size();i++){
            int len1=check(i,i,s);
            int len2=check(i,i+1,s);
            int len=max(len1,len2);
            while(maxl<len){
                maxl=len;
                start=i-(len-1)/2;
            }
        }
        return s.substr(start,maxl); 
        
        // if(s.size()==1) return s;
        // string res="";
        // int len=INT_MIN;
        // for(int i=0;i<s.size();i++){
        //     for(int j=i+1;j<s.size();j++){
        //         if(palindrome(i,j,s)){
        //             if(len<(j-i+1)){
        //                 len=j-i+1;
        //                 res=s.substr(i,j-i+1);
        //             }
        //         }
        //     }
        // }
        // return res=="" ? s.substr(0,1) : res;
       
    }
};