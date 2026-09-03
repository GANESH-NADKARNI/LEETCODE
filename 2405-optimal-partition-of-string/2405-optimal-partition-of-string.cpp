class Solution {
public:
    int partitionString(string s) {
        string temp = "";
        int count = 0;

        for (char ch : s) {
            if (temp.find(ch) != string::npos) {
                temp = "";
                temp += ch;
                count++;
            }
            else {
                temp += ch;
            }
        }

        return ++count;
    }
};