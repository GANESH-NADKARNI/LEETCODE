class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {

        long long int sum = 0, diff;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        diff = (goal >= sum) ? goal - sum : sum - goal;

        return (diff % limit) ? diff / limit + 1 : diff / limit;
    }
};