class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int maxAr = 0;

        while(start < end)
        {
            const int minHeight = min(height[start], height[end]);
            maxAr = max(maxAr, minHeight * (end-start));

            if (height[start]<height[end])
            {
                ++start;
            }
            else{
                --end;
            }
        }
        return maxAr;
    }
};