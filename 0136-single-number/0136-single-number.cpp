class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> s;
	    for(auto x: nums)
		   s[x]++;
	    for(auto x:s)
		   if(x.second==1)
			   return x.first;
	   return -1;    
    }
};