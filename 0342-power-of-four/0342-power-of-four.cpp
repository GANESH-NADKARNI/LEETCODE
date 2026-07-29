class Solution {
public:
    bool isPowerOfFour(int n) {
        int exp=31-countl_zero((unsigned)n);
        if (n<=0)
            return 0;
        return (exp&1)==0 && n==1<<exp;
    }
};