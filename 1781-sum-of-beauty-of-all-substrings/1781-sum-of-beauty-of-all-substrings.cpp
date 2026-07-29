class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {
            vector<int> freq(26, 0);

            for(int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(int f : freq) {
                    if(f > 0) {
                        mini = min(mini, f);
                        maxi = max(maxi, f);
                    }
                }

                sum += (maxi - mini);
            }
        }

        return sum;
    }
};