class Solution {
public:
    int minimumChairs(string s) {
        int res = 0, count = 0;

        for(auto& ch: s){
            if(ch == 'E'){
                count++;
                res = max(count,res);
            }
            else{
                count--;
            }
        }

        return res;
    }
};