class Solution {
public:
    int FinishTime(vector<int>& ls,vector<int>& ld,vector<int>& ws,vector<int>& wd) {

        int minimum = INT_MAX;

        for (int i = 0; i < ls.size(); i++) {
            minimum = min(minimum, ls[i] + ld[i]);
        }

        int ans = INT_MAX;

        for (int i = 0; i < ws.size(); i++) {
            ans = min(ans,max(minimum, ws[i]) + wd[i]);
        }

        return ans;
    }
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        return min(
            FinishTime(landStartTime,landDuration,waterStartTime,waterDuration),
            FinishTime(waterStartTime,waterDuration,landStartTime,landDuration)
        );
    }
};