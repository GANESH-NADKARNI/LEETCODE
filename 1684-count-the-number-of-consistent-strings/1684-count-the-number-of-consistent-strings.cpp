class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = words.size();
        bool alpha[26] = {};

        for (char ch : allowed) {
            alpha[ch - 'a'] = true;
        }

        for (string word : words) {

            for (char c : word) {
                if (!alpha[c - 'a']) {
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};