class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.length();
        int result = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (s[i] == t[j]) {
                    result += std::abs(i - j);
                    break;
                }
            }
        }
        return result;
    }
};