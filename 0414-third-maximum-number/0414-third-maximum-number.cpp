class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long firstmax = LLONG_MIN;
        long long secondmax = LLONG_MIN;
        long long thirdmax = LLONG_MIN;

        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > firstmax) {
                firstmax = nums[i];
            }
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > secondmax && nums[i] < firstmax) {
                secondmax = nums[i];
            }
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > thirdmax &&
                nums[i] < firstmax &&
                nums[i] < secondmax) {

                thirdmax = nums[i];
            }
        }

        
        if (thirdmax == LLONG_MIN) {
            return firstmax;
        }

        return thirdmax;
    }
};