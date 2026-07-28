class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> twice;
        for(int i = 0;i < nums.size();i++){
                twice[nums[i]]++;
            }
        
        
        for(int i = 0;i < nums.size();i++){
            if(twice[nums[i]]==1){
                ans.push_back(nums[i]);
                if(ans.size() == 2){
                    break;
                }
            }
            }
        return ans;
    }
};