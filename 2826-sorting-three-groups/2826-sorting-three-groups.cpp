class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ones = 0, twos = 0, threes = 0;

        for (int num : nums) {
            if (num == 1) {
                ones++;
            } else if (num == 2) {
                twos = max(ones, twos) + 1;
            } else {
                threes = max({ones,twos, threes}) + 1;
            }
        }

        return nums.size() - max({ones,twos,threes});
    }
};