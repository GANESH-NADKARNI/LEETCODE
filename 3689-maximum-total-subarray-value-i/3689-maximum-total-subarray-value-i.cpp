class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        auto [mn,mx] = minmax_element(nums.begin(),nums.end());
        return 1ll * (*mx - *mn) * k ;
    }
};