class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> res;
        for (int num : nums) {
            string curr = "";
            for (int i = 0; i <= 24; i++) {

                if (num % 2) {
                    curr = (char)('a' + i) + curr;
                }
                num /= 2;
            }
            if (num > 0) {
                curr = string(num, 'z') + curr;
            }

            res.push_back(curr);
        }

        return res;
    }
};