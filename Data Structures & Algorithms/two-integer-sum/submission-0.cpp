#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Stores {value, index}

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if complement exists in map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Return indices (smaller index first)
            }

            numMap[nums[i]] = i; // Store current number and index
        }

        return {}; // This case won't happen as per the problem statement
    }
};

