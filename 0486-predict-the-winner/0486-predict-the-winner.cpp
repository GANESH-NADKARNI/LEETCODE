class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        
        if (n % 2 == 0) return true; 
        
        vector<int> ans(nums);
        for (int i = n - 2; i >= 0; --i) {
            for (int j = i + 1; j < n; ++j) {
                ans[j] = max(nums[i] - ans[j], nums[j] - ans[j - 1]);
            }
        }
        return ans[n - 1] >= 0;
    }
};