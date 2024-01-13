class Solution {
public:
    int minSteps(string s, string t) {
        int answer=0;
        vector<int> f1(26);
        vector<int> f2(26);
        // cout<<s.size()<<t.size();
        for(int i=0;i<s.size();i++){
            f1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            f2[t[i]-'a']++;
        }
     for(int i=0;i<26;i++){
         if(f1[i]>f2[i])
            answer=answer + f1[i]-f2[i];
     }
        return answer;
    }
};