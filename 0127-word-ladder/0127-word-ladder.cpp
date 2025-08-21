class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string> s(wordList.begin(),wordList.end());
        queue<pair<string,int>>q;
        int ans=0;
        q.push({beginWord,1});
        while(!q.empty()){
            string current=q.front().first;
            cout<<current<<endl;
            int len=q.front().second;
            q.pop();
            if(current == endWord){
                return len;
            }
            for(int i=0;i<current.size();i++){
                char original=current[i];
                for(char j='a';j<='z';j++){
                    current[i]=j;
                    if(s.find(current)!=s.end()){
                        q.push({current,len+1});
                        s.erase(current);
                    }
                }
                current[i]=original;
            }

        }
    return 0;
    }
};