class Solution {
public:
    string customSortString(string order, string s) {
        vector<char>common;
        vector<char>uncommon;
        string res="";
        for(int i=0;i<order.size();i++){
            for(int j=0;j<s.size();j++){
                if(order[i]==s[j]){
                    common.push_back(order[i]);
             }
            }
        }
        sort(s.begin(),s.end());
        sort(order.begin(),order.end());

       
        cout<<common.size();
        vector<char> difference;
        set_difference(s.begin(),s.end(),order.begin(),order.end(),back_inserter(difference));
        
        for(int i=0;i<common.size()>0;i++){
            cout<<"commons"<<common[i]<<endl;
            res=res+common[i];
        }
       for(int i=0;i<difference.size()>0;i++){
           
           // cout<<"difference"<<difference[i]<<endl;
           if(find(common.begin(), common.end(),difference[i])==common.end()){
            res=res+difference[i];
            cout<<"difference"<<difference[i]<<endl;

        }
       }
        return res;
    }
};