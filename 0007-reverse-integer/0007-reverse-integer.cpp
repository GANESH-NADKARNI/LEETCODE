class Solution {
public:
    int reverse(int x) {
        long long reversedNum = 0; 

        while (x != 0) {
            int digit = x % 10;
            reversedNum = reversedNum * 10 + digit;
            x /= 10; 
        }
        if (reversedNum > INT_MAX || reversedNum < INT_MIN) {
            return 0;
        }

        return static_cast<int>(reversedNum); 
    }
            
    
};