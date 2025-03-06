class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int localMax = INT_MIN;
        int globalMax = 0;

        for(int i = 0; i<nums.size(); i++){

            globalMax = globalMax + nums[i];

            localMax = max(localMax, globalMax);

            globalMax = max(globalMax, 0);
        }
        return localMax;
    }
};