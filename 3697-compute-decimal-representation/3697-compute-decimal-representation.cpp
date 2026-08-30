class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        long multiplier = 1;
        while (n > 0) {
            if (n % 10 != 0) {
                res.push_back((n % 10) * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};