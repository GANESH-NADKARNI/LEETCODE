class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> coloredBall;
        unordered_map<int, int> colorCount;

        vector<int> res;

        for (auto& q : queries) {
            int ball = q[0];
            int color = q[1];


            if (coloredBall.count(ball)) {
                int oldColor = coloredBall[ball];

                colorCount[oldColor]--;

                if (colorCount[oldColor] == 0) {
                    colorCount.erase(oldColor);
                }
            }

            coloredBall[ball] = color;
            colorCount[color]++;

            res.push_back(colorCount.size());
        }

        return res;
    }
};