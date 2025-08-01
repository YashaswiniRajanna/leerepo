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
    // void dfs(int &total,int depth,vector<NestedInteger>& nestedList){
    //     for(auto i:nestedList){
    //         if(i.isInteger()){
    //             total+=i.getInteger()*depth;
    //         }
    //         else{
    //             dfs(total,depth+1,i.getList());
    //         }     
    //     }
    // }
public:
    int depthSum(vector<NestedInteger>& nestedList) {
        int depth=1,total=0;
        queue<NestedInteger> q;
        for(auto i: nestedList){
            q.push(i);
        }
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                NestedInteger cur=q.front();
                q.pop();
                if(cur.isInteger()){
                    cout<<depth<<endl;
                    total+=cur.getInteger()*depth;
                }
                else{
                    for(auto i : cur.getList()){
                        q.push(i);
                    }
                }
            }
            depth++;
        }

        // dfs(total,depth,nestedList);
        return total;
    }
};