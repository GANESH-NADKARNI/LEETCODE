class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> charCount;
        for (char c : order) {
            charCount[c] = 0;
        }
        
        for (char c : s) {
            if (charCount.find(c) != charCount.end()) {
                charCount[c]++;
            }
        }
        
        string sorted;
        for (char c : order) {
            sorted.append(charCount[c], c);
        }
        
        for (char c : s) {
            if (charCount.find(c) == charCount.end()) {
                sorted.push_back(c);
            }
        }
        
        return sorted;
    }
};