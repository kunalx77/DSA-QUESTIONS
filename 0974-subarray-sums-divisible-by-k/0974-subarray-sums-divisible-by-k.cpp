class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;
        int prefixSum = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            int rem = ((prefixSum % k) + k) % k;
            ans += freq[rem];
            freq[rem]++;
        }
        return ans;
    }
};