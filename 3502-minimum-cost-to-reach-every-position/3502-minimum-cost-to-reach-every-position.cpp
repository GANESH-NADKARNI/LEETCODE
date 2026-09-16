class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> answer(n);
        int currentMin = cost[0];
        
        for (int i = 0; i < n; ++i) {
            currentMin = min(currentMin, cost[i]);
            answer[i] = currentMin;
        }
        
        return answer;
    }
};