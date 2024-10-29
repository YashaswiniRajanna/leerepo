class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        map<int, bool> numMap;
        int longestStreak = 0;

        // Populate the map with numbers from the input vector
        for (auto num : nums) {
            numMap[num] = true; // Set value to true for existence
        }

        // Iterate through each number in nums
        for (auto num : nums) {
            long long curr = num;
            int currentStreak = 0;

            // Continue squaring the current number until it's not found in the map
            while (numMap.find(curr) != numMap.end()) {
                currentStreak++;
                curr = curr * curr;

                // Check to prevent overflow and unnecessary calculations
                if (curr > 1e5) {
                    break;
                }
            }

            // Update the longest streak if current streak is greater
            longestStreak = std::max(longestStreak, currentStreak);
        }

        // Return -1 if longest streak is less than 2
        return longestStreak < 2 ? -1 : longestStreak;
        //set
        // int mans=0;
        // unordered_set<int>se(nums.begin(),nums.end());
        // for(auto i: nums){
        //     int ans=0;
        //     long long curr=i;
        //     while(se.find(curr)!=se.end()){
        //         ans++;
        //         if(curr*curr>1e5){
        //             break;
        //         }
        //         curr=curr*curr;
        //     }
        //     mans=max(mans,ans);
        // }
        // return mans<2?-1:mans; 
    }
};