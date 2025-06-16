class Solution {
public:
    // bool nod(int start, int end, string s){
    //     set<int> se;
    //     for(int i=start;i<=end;i++){
    //         se.insert(s[i]);
    //     }
    //     bool flag=se.size()==(end-start+1);
    //     cout<<"callig nod"<<start<<end<<se.size()<<(end-start+1)<<flag<<endl;
    //     return se.size()==(end-start+1);
    // }
    // int lengthOfLongestSubstring(string s) {
    //     if(s.size()==1) return 1;
    //     else{
    //         int ans=0;
    //         int start=0,end=0;
    //         while(end<s.size()){
    //             if(nod(start,end,s)){
    //                 end++;
    //                 ans=max(ans,end-start);
    //             }
    //             else{
    //                 start++;
    //                 end=start;
    //             }
    //         }
    //         return ans;
    //     }
    // }
     int lengthOfLongestSubstring(string s) {
        int start=0,end=0,ans=0;
        set<char>se;
        while(end<s.size()){
            while(se.find(s[end])!=se.end()){
                se.erase(s[start]);
                start++;
            }
            se.insert(s[end]);
            ans=max(ans,end-start+1);
            end++;
        }
        return ans;
     }
};