class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        int temp = num;
        bool negative = false;
        if (temp < 0) {
            negative = true;
            temp = -temp;
        }
        string answer = "";
        while (temp > 0) {
            answer = (char)(temp % 7 + '0') + answer;
            temp /= 7;
        }
        if (negative) answer = '-' + answer;
        return answer;
    }
};