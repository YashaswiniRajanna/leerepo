class Solution {
public:
    double median(vector<int>nums){
        double res;
        if(nums.size()%2==0){
            int mid=(int)nums.size()/2;
           res= (double)(nums[mid] + nums[mid-1])/2;
        }
        else{
            int mid=(int)nums.size()/2;
            res=nums[mid];
        }
        return res;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0){
            return median(nums2);
        }
        else if(nums2.size()==0){
            return median(nums1);
        }
        else{
            vector<int> res;
            int i=0,j=0;
            while(i<nums1.size() && j<nums2.size()){
                if(nums1[i]<=nums2[j]){
                    res.push_back(nums1[i++]);
                }
                else{
                    res.push_back(nums2[j++]);
                }
            }
            while(i<nums1.size()){
                res.push_back(nums1[i++]);
            }
            while(j<nums2.size()){
                res.push_back(nums2[j++]);
            }
            for(auto i: res){
                cout<<i<<" "<<endl;
            }
            return median(res);
        }
        return -1;
    }
};