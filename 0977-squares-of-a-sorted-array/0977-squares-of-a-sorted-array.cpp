class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0, right = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if (leftSq > rightSq) {
                ans[i] = leftSq;
                left++;
            } else {
                ans[i] = rightSq;
                right--;
            }
        }

        return ans;
    }
};