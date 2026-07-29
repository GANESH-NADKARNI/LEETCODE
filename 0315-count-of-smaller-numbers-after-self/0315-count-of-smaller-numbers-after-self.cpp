class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);    
    vector<int> sortedRight;       
    for (int i = n - 1; i >= 0; --i) {
        int pos = lower_bound(sortedRight.begin(), sortedRight.end(), nums[i]) - sortedRight.begin();
        result[i] = pos; 
        sortedRight.insert(sortedRight.begin() + pos, nums[i]);
    }

    return result;
    }
};