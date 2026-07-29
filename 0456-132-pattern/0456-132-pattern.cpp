class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<long long> s;
        int ak = INT_MIN; 

    for (int i = nums.size() - 1; i >= 0; --i) {
      if (nums[i] < ak)
        return true;
      while (!s.empty() && s.top() < nums[i])
        ak = s.top(), s.pop();
      s.push(nums[i]); 
    }

    return false;
    }
};