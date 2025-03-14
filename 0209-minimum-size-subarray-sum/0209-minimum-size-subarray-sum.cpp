class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int minSize = INT_MAX;
        int sum = 0;

        for(int j = 0; j<nums.size(); j++)
        {

            sum = sum + nums[j];
            while(sum >= target)
            {
                if(j - i + 1 < minSize)
                {
                    minSize = j-i+1;
                }

                sum -= nums[i];
                i++;
            }
        }
        if(minSize == INT_MAX) return 0;
        return minSize;
    }
};