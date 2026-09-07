class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0, c = 0;

        for (char ch : s) {

            if (isdigit(ch) || ch == ' ') {
                continue;
            }

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                v++;
            } 
            else {
                c++;
            }
        }

        return c > 0 ? v / c : 0;
    }
};