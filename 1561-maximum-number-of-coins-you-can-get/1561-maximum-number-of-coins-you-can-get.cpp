class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int t = piles.size() / 3, n = piles.size() - 2;
        int ans = 0;
        sort(piles.begin(),piles.end());

        while(t--){
            ans += piles[n];
            n -=2;
        }

        return ans;
    }
};