class Solution {
public:
    int dayOfYear(string date) {
        int ans;
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        vector<int> ny = {0,31,59,90,120,151,181,212,243,273,304,334};
        vector<int> ly = {0,31,60,91,121,152,182,213,244,274,305,335};
        
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            ans = ly[month-1] + day;
        }else{
            ans = ny[month-1] + day;
        }
        return ans;
    }
};