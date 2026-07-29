class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int freq[26] = {0};
        for(char c : text){
            freq[c - 'a']++;
        }
        return min({freq['b'-'a'],freq['a'-'a'],freq['l'-'a']>>1,freq['o'-'a']>>1,freq['n'-'a']});
    }
};