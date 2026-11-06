class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double mini = 51.0;
        int i = 0,j = nums.size() - 1;
        sort(nums.begin(),nums.end());

        while (i < j) {
            double currentAvg = (nums[i] + nums[j]) / 2.0;
            mini = min(mini, currentAvg);
            i++;
            j--;
        }
        return mini;
    }
};