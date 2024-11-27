class Solution {
public:
    string reverseWords(string s) {
        string word="";
        string res="";
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else if(s[i]==' '){
                if(!word.empty()){
                    res=word+(!res.empty()? " ": "")+res;
                    word="";
                }
            }
        }
        if(!word.empty()){
            res=word+(!res.empty()? " ": "")+res;
            word="";
        }
        return res;       
    }
};