class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxcandy = 0;
        for(int i = 0;i < candies.size();i++){
            maxcandy = max(maxcandy,candies[i]);
        }
        for(int i = 0;i < candies.size();i++){
            ans.push_back(candies[i]+extraCandies >= maxcandy);
        }
        return ans;
    }
};