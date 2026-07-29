class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ans;
        int odd=0,even=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]%2==0){
            even++;
           }else{
            odd++;
           }
        }
      while(even!=0){
        ans.push_back(0);
        even--;
      }  
      while(odd!=0){
        ans.push_back(1);
        odd--;
      }
      return ans;
    }

};