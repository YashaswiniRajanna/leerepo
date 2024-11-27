class Solution {
public:
    void reverseWords(vector<char>& s) {
        int original_size=s.size();
        vector<char> word1;
        vector<char> dup,dup1;
        int i=0,j=s.size()-1;
        while(i<s.size()){
            if(s[i]!=' '){
                word1.push_back(s[i]);
            }
            else if(s[i]==' '){
                if(!word1.empty()){
                    if(!dup.empty()){
                        word1.push_back(' ');
                        dup.insert(dup.begin(),word1.begin(),word1.end());
                        word1.clear();
                    }
                    else{
                        dup.insert(dup.begin(),word1.begin(),word1.end());
                        word1.clear();
                    }
                }
            }
            i++;
        }
        if(!word1.empty()){
            if(!dup.empty()){
                        word1.push_back(' ');
                        dup.insert(dup.begin(),word1.begin(),word1.end());
                        word1.clear();
            }
            else{
                dup.insert(dup.begin(),word1.begin(),word1.end());
                word1.clear();
            }
        }
        s=dup;
    }
};