class Solution {
private:
    bool isprime(int n){
        if(n < 2) return false;
        for(int i = 2; i*i <= n;i++){ 
            if(n % i == 0)return false;
        }
        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0,n = nums.size();
        for(int i =0;i < n; i++){
          if(isprime(nums[i][i]))
            ans = max(ans,nums[i][i]);
          if(i != n-i-1 && isprime(nums[i][n-i-1]))
            ans = max(ans,nums[i][n-i-1]);

        }
        return ans;
    }
};