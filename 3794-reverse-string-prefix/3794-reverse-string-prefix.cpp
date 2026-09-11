class Solution {
public:
    string reversePrefix(string s, int k) {
        for (int left = 0, right = k-1; left < right; left++, right--) {
            swap(s[left], s[right]);
        }
        return s;
    }
};