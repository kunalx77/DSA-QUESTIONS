class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        int curMax = nums[0];
        int maxSum = nums[0];
        int curMin = nums[0];
        int minSum = nums[0];
        totalSum = nums[0];
        for (int i = 1; i < n; i++) {
            totalSum += nums[i];
            if (curMax < 0)
                curMax = nums[i];
            else
                curMax += nums[i];
            if (curMax > maxSum)
                maxSum = curMax;
            if (curMin > 0)
                curMin = nums[i];
            else
                curMin += nums[i];
            if (curMin < minSum)
                minSum = curMin;
        }
        if (maxSum < 0)
            return maxSum;
        return max(maxSum, totalSum - minSum);
    }
};