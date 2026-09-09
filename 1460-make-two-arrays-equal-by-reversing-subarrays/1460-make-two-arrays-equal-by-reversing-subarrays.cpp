class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        return (sort(arr.begin(), arr.end()), sort(target.begin(), target.end()), arr == target);   
    }
};