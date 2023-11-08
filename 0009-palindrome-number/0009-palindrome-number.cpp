class Solution {
public:
    bool isPalindrome(int x) {
        bool flagi=false;
        long long n=x;
        long long digit=0;
        long long reverse=0;
        if(n>=0){
        while(n!=0){
         digit=n%10;
         n=n/10;   
        reverse= reverse*10 + digit; 
        }
        
        if(x == reverse){
            flagi=true;
        }
        }
        return flagi;
    }
};