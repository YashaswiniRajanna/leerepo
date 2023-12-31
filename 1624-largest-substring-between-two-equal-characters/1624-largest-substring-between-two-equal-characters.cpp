class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int count=0;
        // for(int left=0;left<s.size()-1;left++){
        //     for(int right=left+1;right<s.size();right++){
        //         if(s[left]==s[right]){
        //             count=max(count,right-left);
        //         }
        //     }
        //     }
        // return count-1;
        
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
           if(m.find(s[i])!=m.end()){
               count=max(count, i-m[s[i]]);
           }
            else{
                m[s[i]]=i;
            }
        }
        return count-1;
    }
};