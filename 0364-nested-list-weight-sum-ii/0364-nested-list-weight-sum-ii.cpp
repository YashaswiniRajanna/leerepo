/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
private:
    void helper(vector<NestedInteger>& nestedList,int depth,int &ans){
        for(auto i: nestedList){
            if(i.isInteger()){
                ans=max(ans,depth);
            }
            else{
                helper(i.getList(),depth+1,ans);
            }
        }
    }
    void total(vector<NestedInteger>& nestedList,int depth,int &weight,int &ans){
        for(auto i: nestedList){
            if(i.isInteger()){
                weight+=((ans-depth+1)*i.getInteger());
            }
            else{
                total(i.getList(),depth+1,weight,ans);
            }
        }
    }
public:
    int depthSumInverse(vector<NestedInteger>& nestedList) {
        int ans=0,ret=0;
        helper(nestedList,1,ans);
        cout<<"ans "<<ans<<endl;
        total(nestedList,1,ret,ans);
        return ret;
    }
};
