class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> st;
        int count = 1;

        for (char ch : s) {
            if (st.count(ch)) {
                st.clear();
                count++;
            }
            st.insert(ch);
        }

        return count;
    }
};