class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=-1;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                ans=max(num[i]-48,ans);
            }
        }
        string t =to_string(ans);
        return (ans==-1)? "": t+t+t;

    }
};