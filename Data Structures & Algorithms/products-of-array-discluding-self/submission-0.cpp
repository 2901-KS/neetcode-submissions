class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> muls;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        int m=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                m*=nums[j];
            }
        }
        muls.push_back(m);
       }
    return muls;

    }
};
