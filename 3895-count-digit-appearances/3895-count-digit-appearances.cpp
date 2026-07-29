class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for (int num:nums){
            while(num != 0 ){
                int temp =  num % 10;
                if(temp == digit){
                    count++;
                }
                num /= 10;
            }
        }
        return count;
    }
};