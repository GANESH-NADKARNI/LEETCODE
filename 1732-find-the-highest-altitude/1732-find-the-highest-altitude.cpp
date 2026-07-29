class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0, altitude = 0;
        for(int x : gain){
            altitude += x;
            ans = max(altitude,ans);
        }
        return ans;
    }
};