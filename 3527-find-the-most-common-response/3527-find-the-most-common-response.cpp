class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int> mp;
        int maxf = 0;
        string ans = "";

        for (auto &r : responses) {
            unordered_set<string> st(r.begin(), r.end()); 
            
            for (auto &x : st) {
                mp[x]++;
                
                if (mp[x] > maxf) {
                    maxf = mp[x];
                    ans = x;
                } 
                else if (mp[x] == maxf) {
                    ans = min(ans, x); 
                }
            }
        }
        return ans;
    }
};