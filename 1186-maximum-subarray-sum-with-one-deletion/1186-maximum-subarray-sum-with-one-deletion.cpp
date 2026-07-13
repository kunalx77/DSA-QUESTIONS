class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int keep = arr[0];
        int del = INT_MIN;
        int ans = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            int newDel = keep;
            if (del != INT_MIN)
                newDel = max(newDel, del + arr[i]);
            int newKeep = max(arr[i], keep + arr[i]);
            keep = newKeep;
            del = newDel;
            ans = max(ans, max(keep, del));
        }
        return ans;
    }
};