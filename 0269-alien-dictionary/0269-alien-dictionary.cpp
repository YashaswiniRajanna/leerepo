class Solution {
public:
    void toposort(map<char,set<char>>&adj,string &res,int &V,vector<string>& words){
        queue<char>q;
        map<char,int>indegree;
        for(auto i: adj){
            char temp=i.first;
            if(indegree[temp]==0) indegree[temp]=0;
            for(auto j: i.second){
                indegree[j]++;
            }
        }
        for(auto i: indegree){
            cout<<i.first<<" "<<i.second<<endl;;
        }

        for(auto i: indegree){
            if(i.second==0) {
                q.push(i.first);
            }
        }

        while(!q.empty()){
            char node=q.front();
            q.pop();
            res+=node;
            for(auto i : adj[node]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
    }
    string alienOrder(vector<string>& words) {
        map<char,int> v;
        map<char,set<char>>adj;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                v[words[i][j]]++;
                adj[words[i][j]]=set<char>();
            }
        }
        int len=v.size();
        cout<<len<<"leng"<<endl;
        for(int i=1;i<words.size();i++){
            string s1=words[i-1];
            string s2=words[i];
            // cout<<s1<<"s1 and s2"<<s2<<endl;
            if(s1.size()>s2.size() && s1.substr(0,s2.size())==s2) {
                // cout<<"entering"<<endl;
                return "";
            }
            int min_len=min(s1.size(),s2.size());
            for(int j=0;j<min_len;j++){
                if(s1[j]!=s2[j]){
                    adj[s1[j]].insert(s2[j]);
                    break;
                }
            }
        }
        for(auto i: adj){
            char c=i.first;
            set<char> vec=i.second;
            cout<<c<<"->";
            for(auto k : vec){
                cout<<k<<" ";
            }
            cout<<endl;
        }
        string res="";
        toposort(adj,res,len,words);
        if(res.size()<adj.size()){
            return "";
        }
        return res;
    }
};