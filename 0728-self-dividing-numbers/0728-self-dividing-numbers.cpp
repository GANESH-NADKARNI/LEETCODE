class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        
        for(int i = left; i <= right; i++) {
            int flag = 0;
            int temp = i;
            
            while (temp > 0) {
                int digit = temp % 10;
                
                if (digit == 0 || i % digit != 0) {
                    flag = 1;
                    break;
                } 
                temp = temp / 10;
            }

            if (flag == 0) {
                nums.push_back(i);
            }
        }
    
        return nums;
    }
};