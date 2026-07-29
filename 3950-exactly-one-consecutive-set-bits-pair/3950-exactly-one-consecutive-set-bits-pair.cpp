class Solution {
public:
    bool consecutiveSetBits(int n) {
    int cnt = 0;

    while (n > 1) {
        if ((n & 3) == 3) { 
            cnt++;
        }
        n >>= 1;
    }

    return cnt == 1;
    }
};