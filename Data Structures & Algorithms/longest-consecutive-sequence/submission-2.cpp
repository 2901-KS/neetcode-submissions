class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;

        sort(nums.begin(), nums.end());  // O(n log n)

        int maxLen = 1;
        int currLen = 1;

        for(int i = 1; i < n; i++) {
            if(nums[i] == nums[i - 1]) {
                continue;  // Skip duplicates
            } else if(nums[i] == nums[i - 1] + 1) {
                currLen++;
            } else {
                currLen = 1;  // Reset count if not consecutive
            }

            maxLen = max(maxLen, currLen);
        }

        return maxLen;
    }
};
