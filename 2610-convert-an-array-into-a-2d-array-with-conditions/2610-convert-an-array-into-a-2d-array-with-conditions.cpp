class Solution {
public:
 vector<vector<int>> findMatrix(vector<int>& nums) {
         std::sort(nums.rbegin(), nums.rend());

    // Step 2: Create the 2D array and distribute elements
    std::vector<std::vector<int>> result;

    for (int num : nums) {
        bool inserted = false;

        // Try to insert the current number into existing rows
        for (auto& row : result) {
            if (std::find(row.begin(), row.end(), num) == row.end()) {
                row.push_back(num);
                inserted = true;
                break;
            }
        }

        // If the current number couldn't be inserted into existing rows, create a new row
        if (!inserted) {
            result.push_back({num});
        }
    }

    return result;  
        
    }
};