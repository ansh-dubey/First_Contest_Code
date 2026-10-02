class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n = nums.size();

        if(n == 0) return 0;

        vector<long long> dp(n);
        dp[0] = nums[0];

        for(int i=1; i<n; i++) {
            long long no = dp[i-1];
            long long yes;

            if(colors[i] != colors[i-1]) {
                yes = dp[i-1] + nums[i];
            } else {
                yes = nums[i] + (i>1 ? dp[i-2] : 0);
            }

            dp[i] = max(yes, no);
        }
        return dp[n-1];
    }
};