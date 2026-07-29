class Solution {
public:
    int Waviness(int x){
        string s = to_string(x);
        int cnt = 0;
        for(int i = 1;i < s.length() - 1;i++){
            if((s[i-1] < s[i] && s[i+1] < s[i]) || (s[i-1] > s[i] && s[i+1] > s[i])){
                cnt++; 
            }
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int j = num1;j <= num2;j++){
            ans += Waviness(j);
        }
        return ans;

    }
};