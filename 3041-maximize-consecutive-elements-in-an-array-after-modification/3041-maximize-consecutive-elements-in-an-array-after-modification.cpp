class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        unordered_map<int,int> inc;

        for(int i : nums){
            inc[i+1] = inc[i] + 1;
            inc[i] = inc[i-1] + 1;

            ans = max({inc[i+1],ans,inc[i]});
        }


        return ans;
    }
};