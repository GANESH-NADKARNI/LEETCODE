class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> present(nums.begin(),nums.end());

        int curr = k;

        while(present.count(curr)){
            curr += k;
        }

        return curr;
    }
};