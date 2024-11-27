class Solution {
public:
    void reverseWords(vector<char>& s) {
        //2
        reverse(s.begin(),s.end());

        cout<<endl;
        int start,end;
        for(int i=0;i<s.size();i++){
            start=i;
            while(i<s.size() && isalnum(s[i])){
                ++i;
            }
            if(i>s.size()) break;
            end=i;
            reverse(s.begin()+start,s.begin()+end);
        }
        // reverse(s.begin()+start,s.end());
        
    }
};
        
        // 1
//         int original_size=s.size();
//         vector<char> word1;
//         vector<char> dup;
//         int i=0,j=s.size()-1;
//         while(i<s.size()){
//             if(s[i]!=' '){
//                 word1.push_back(s[i]);
//             }
//             else if(s[i]==' '){
//                 if(!word1.empty()){
//                     if(!dup.empty()){
//                         word1.push_back(' ');
//                         dup.insert(dup.begin(),word1.begin(),word1.end());
//                         word1.clear();
//                     }
//                     else{
//                         dup.insert(dup.begin(),word1.begin(),word1.end());
//                         word1.clear();
//                     }
//                 }
//             }
//             i++;
//         }
//         if(!word1.empty()){
//             if(!dup.empty()){
//                         word1.push_back(' ');
//                         dup.insert(dup.begin(),word1.begin(),word1.end());
//                         word1.clear();
//             }
//             else{
//                 dup.insert(dup.begin(),word1.begin(),word1.end());
//                 word1.clear();
//             }
//         }
//         s=dup;
        
//     }
// };