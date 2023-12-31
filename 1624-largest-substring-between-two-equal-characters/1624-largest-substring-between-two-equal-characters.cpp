class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int count=0;
        for(int left=0;left<s.size()-1;left++){
            for(int right=left+1;right<s.size();right++){
                if(s[left]==s[right]){
                    count=max(count,right-left);
                }
            }
            }
        return count-1;
//         int start=0,end=s.size()-1;
//         int mid=(start+end)/2;

//         while(start<=s.size() && end>=0){
//             if(s[start]==s[end]){
//                 for(int i=start;i<end;i++){
//                     count++;
//                 }
//             }
//             start++;
//             end--;
//         }
//       return count; 
        
//         unordered_map<char,int>m;
//         int count=0;
//         for(auto i : s){

//             if(s[i]==0){
//                 // count++;
//                // s[i]=count;
//             }
//             else{
//                 int end=i;
//             }
//         }
        
    }
};