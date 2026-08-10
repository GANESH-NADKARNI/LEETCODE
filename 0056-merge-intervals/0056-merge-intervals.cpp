class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> a;

        sort(intervals.begin(), intervals.end());

        for (auto x : intervals) {
            if (a.empty() || a.back()[1] < x[0]) {
                a.push_back(x);
            } else {
                a.back()[1] = max(a.back()[1], x[1]);
            }
        }

        return a;
    }
};