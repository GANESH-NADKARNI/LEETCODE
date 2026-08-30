class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> blocks;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                blocks[nums[i]]++;
            }
        }

        int count = 0;

        for (auto& [num, blockCount] : blocks) {
            if (blockCount == 1) {
                count++;
            }
        }

        return count;
    }
};