class Solution {
public:
    string stringHash(string s, int k) {
        string result = "";
        int n = s.size();
        int i = 0;
        while (i < n) {
            int repeat = k;
            int val = 0;
            while (i < n && repeat--) {
                val += s[i] - 'a';
                i++;
            }
            val = val % 26;
            char ans = 'a' + val;
            result += ans;
        }
        return result;
    }
};