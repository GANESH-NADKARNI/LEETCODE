class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k == nums.size()){
            return *max_element(nums.begin(),nums.end());
        }

        unordered_map<int,int> mp;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        if(k == 1){
            int max_val = -1;
            for(int j = 0; j < n; j++){
                if(mp[nums[j]] == 1){
                    max_val = max(max_val, nums[j]);
                }
            }
            return max_val;
        }

        if(mp[nums[0]] == 1 && mp[nums[n-1]] == 1){
            return max(nums[0],nums[n-1]);
        }

        if(mp[nums[0]] == 1 && mp[nums[n-1]] > 1){
            return nums[0];
        }

        if(mp[nums[0]] > 1 && mp[nums[n-1]] == 1){
            return nums[n-1];
        }

        return -1;
    }
};