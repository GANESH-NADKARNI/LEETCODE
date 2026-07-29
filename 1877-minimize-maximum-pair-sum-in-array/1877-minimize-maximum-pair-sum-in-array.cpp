class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        int n = nums.size();
        for (int i = 0; i < n/2; i++)
            res = max(res, nums[n - 1 - i] + nums[i]);

        return res;
    }
};