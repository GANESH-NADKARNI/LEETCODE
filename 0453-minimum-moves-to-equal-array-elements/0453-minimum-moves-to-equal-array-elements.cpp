class Solution {
public:
    int minMoves(vector<int>& nums) {
       int ans = 0,minimum = *min_element(nums.begin(), nums.end() );
        for(int x : nums){
            ans += x-minimum;
            
        }
        return ans;
    }
};