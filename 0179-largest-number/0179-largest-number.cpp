class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> a;
        for(int x:nums){
            a.push_back(to_string(x));
            }
        sort(a.begin(),a.end(),[](auto&a,auto&b){return a+b>b+a;});
        return a[0]=="0"?"0":accumulate(a.begin(),a.end(),string{});
    }
};