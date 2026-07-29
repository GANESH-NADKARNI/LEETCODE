class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sign = -1,sum = 0;
        for(int i = 0;i < nums.size();i++){
            sign =-1 * sign;
            sum += (nums[i]*sign);
        }
        return sum;
    }

};