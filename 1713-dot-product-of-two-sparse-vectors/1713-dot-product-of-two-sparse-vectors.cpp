class SparseVector {
public:
    vector<int> arr;
    SparseVector(vector<int> &nums) {
        this->arr=nums;
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int dot=0;
        for(int i=0;i<arr.size();i++){
            dot+=arr[i]*vec.arr[i];
        }
        return dot;
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);