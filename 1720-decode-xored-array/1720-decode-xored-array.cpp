class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int curr;
        for (int i = 0; i < encoded.size(); i++) {
            curr = encoded[i];
            encoded[i] = first;
            first = first ^ curr;
        }
        encoded.push_back(first);
        return encoded;
    }
};