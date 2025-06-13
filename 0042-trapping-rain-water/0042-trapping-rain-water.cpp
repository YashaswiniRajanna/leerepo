class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size()-1;
        int maxl=0,maxr=0,water=0;
        vector<int>maxil;
        
        maxil.push_back(0);
        for(int i=1;i<height.size();i++){
            if(i==1){
                maxl=height[i-1];
            }
            else{ maxl=max(maxl,height[i-1]);}
            maxil.push_back(maxl);
        }
        //   cout<<"size"<<maxil.size()<<" "<<endl<<"maxil"<<" ";
        //   for(auto i: maxil){
        //     cout<<i;
        //   }

        vector<int>maxir;
        maxir.push_back(0);
        for(int i=height.size()-2;i>=0;i--){
            if(i==height.size()-2){maxr=height[height.size()-1];}
            else{
                maxr=max(maxr,height[i+1]);
                }
            maxir.push_back(maxr);
        }
        // cout<<endl;
        reverse(maxir.begin(),maxir.end());

        // cout<<"size"<<maxir.size()<<" "<<endl<<"maxir"<<" ";
        // for(auto i: maxir){
        // cout<<i;
        // }

        for(int i=0;i<height.size();i++){
            if(min(maxir[i],maxil[i])-height[i]>0){
                water+=min(maxir[i],maxil[i])-height[i];
            };
        }
    return water;
    }
};