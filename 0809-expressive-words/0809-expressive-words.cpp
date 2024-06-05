class Solution {
public:
    bool check(string s, string w){
       //w=hello s=helllo
        int m=w.size(),n=s.size(),j=0;
        for(int i=0;i<n;i++){
            if(j<m && s[i]==w[j]) j++;
            else if(i>0 && i<n-1 && s[i-1]==s[i] && s[i]==s[i+1]);
            else if(i>1 && s[i-2]==s[i-1] && s[i-1]==s[i]);
            else return false;
        }
        return j==m;
    }
    int expressiveWords(string s, vector<string>& words) {
        int res=0;
    for(auto word: words){
        if(check(s,word)){
            cout<<word;
            res++;
        }
       }
        return res;
        }
        //"hello" -> heeellooo" ,,,  "hi" -> "hiiii"
        // int count=0;
        // unordered_map<char,int> m1;
        // for(int i=0;i<s.size();i++){
        //     m1[s[i]]++;
        // }
        // for(auto i:m1){
        //     cout<<i.first<<endl;
        // }
        // for(int i=0;i<words.size();i++){
        //     unordered_map<char,int> m2;
        //     for(int j=0;j<words[i].size();j++){
        //         m2[words[i][j]]++;
        //     }
        //  bool flag=false;
        //    for(auto i :m1 ){
        //       if(m2.find(i.first)==m2.end()){
        //            flag=true;
        //            exit;
        //        }
        //    }
        //     if(!flag){
        //         count++;
        //     }
        // }
        // return count;
};