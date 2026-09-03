class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = INT_MAX, oddCount = 0;

        for(int num : nums1){
            mini = min(mini , num);
            oddCount += num % 2? 1:0;
        }

        return mini % 2 || !oddCount;
    }
};