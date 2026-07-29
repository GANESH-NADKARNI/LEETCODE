class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> boxCount;
        int maxBalls = 0;

        for (int i = lowLimit; i <= highLimit; i++)
        {

            int boxNumber = getBoxNumber(i);


            boxCount[boxNumber]++;

            maxBalls = max(maxBalls, boxCount[boxNumber]);
        }

        return maxBalls;
    }

    int getBoxNumber(int n)
    {
        int sum = 0;


        while (n > 0)
        {
            sum += (n % 10); 
            n /= 10;         
        }

        return sum;
    }
};