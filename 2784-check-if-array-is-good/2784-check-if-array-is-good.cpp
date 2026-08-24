class Solution {
public:
    bool isGood(vector<int>& nums) {
        int max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        vector<int>count(max+1,0);
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(int i=1;i<max;i++)
        {
            if(count[i]>1 || count[i]==0)
            return false;
        }
        return count[max]==2;
    }
};