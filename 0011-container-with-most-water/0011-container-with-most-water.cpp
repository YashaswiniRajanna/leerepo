class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int marea=0;
        while(left<right){
            int breadth=right-left;
            int heights=min(height[left],height[right]);
            marea=max(marea, breadth * heights);
            if(height[right]>height[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return marea;
    }
};