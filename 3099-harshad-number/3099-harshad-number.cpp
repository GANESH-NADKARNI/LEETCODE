class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp = x,digit = 0;
        while ( temp > 0){
            digit += temp%10;
            temp /= 10;
        }
        return (x%digit == 0)?digit:-1;
    }
};