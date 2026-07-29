class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
    unordered_map<int, int> NextGreater;
    stack<int> stack;  

    for (const int num : nums2) {
      while (!stack.empty() && stack.top() < num)
        NextGreater[stack.top()] = num, stack.pop();
      stack.push(num);
    }

    for (const int num : nums1)
      if (const auto it = NextGreater.find(num);
          it != NextGreater.cend())
        ans.push_back(it->second);
      else
        ans.push_back(-1);

    return ans;
    }
};