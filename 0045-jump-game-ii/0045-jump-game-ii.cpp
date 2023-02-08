class Solution {
public:
    int jump(vector<int>& nums) {
        int n = (int) nums.size();
        int dp[n + 1];
        fill(dp, dp + n + 1, (int) 1e6);
        dp[0] = 0;
        for (int i = 0; i < n; ++i) {
            for (int jump = 1; jump <= nums[i]; ++jump) {
                if (i + jump < n) {
                    dp[i + jump] = min(dp[i + jump], dp[i] + 1);
                }
            }
        }
        return dp[n - 1];
    }
};