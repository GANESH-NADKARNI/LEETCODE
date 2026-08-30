class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = 0, mini = 0 , n = nums.size();

        if (n == 1) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[maxi]) {
                maxi = i;
            }
            if (nums[i] < nums[mini]) {
                mini = i;
            }
        }
        if (mini > maxi) {
            swap(mini, maxi);
        }
        return min({maxi + 1, n - mini, mini + 1 + n - maxi});
    }
};