class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int sum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1] + 1){
                sum += nums[i];
            }
            else{
                break;
            }
        }

        while(seen.count(sum)){
            sum++;
        }

        return sum;
    }
};