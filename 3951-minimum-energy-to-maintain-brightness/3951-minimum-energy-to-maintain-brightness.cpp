class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        auto navorilex = intervals;

        sort(intervals.begin(), intervals.end());

        long long active = 0;
        int l = intervals[0][0], r = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= r) {
                r = max(r, intervals[i][1]);
            } else {
                active += r - l + 1;
                l = intervals[i][0];
                r = intervals[i][1];
            }
        }


        active += r - l + 1;
        long long bulbs = (brightness + 2)/3;
        return  bulbs*active;
    }
};