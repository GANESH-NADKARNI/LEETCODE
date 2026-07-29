class Solution {
public:
    bool isvowel(char ch){
        ch = tolower(ch);
        return ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u';
    }
    int maxFreqSum(string s) {
  
    unordered_map<char, int> vowelCount;
    unordered_map<char, int> consCount;

    for (char ch : s) {
        if (isalpha(ch)) {
            char lowerCh = tolower(ch);
            if (isvowel(lowerCh)) {
                vowelCount[lowerCh]++;
            } else {
                consCount[lowerCh]++;
            }
        }
    }

    int maxVowel = 0, maxCons = 0;

    for (auto& pair : vowelCount)
        maxVowel = max(maxVowel, pair.second);

    for (auto& pair : consCount)
        maxCons = max(maxCons, pair.second);

    return maxVowel + maxCons;
}

};