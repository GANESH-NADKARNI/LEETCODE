class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> Type;
        int count = 0;

        for(char jewel : jewels) {
            Type.insert(jewel);
        }

        for(char stone : stones) {
            if(Type.find(stone) != Type.end()) {
                count++;
            }
        }

        return count;
    }
};