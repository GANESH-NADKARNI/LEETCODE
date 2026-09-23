class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3 || arr[0] > arr[1] || arr[arr.size() - 2] < arr[arr.size() - 1])
            return false;

        bool dec = false;

        for (int i = 1; i < arr.size(); i++) {

            if (arr[i - 1] == arr[i])
                return false;

            if (arr[i - 1] > arr[i]) {
                dec = true;
            }
            else if (dec) {
                return false;
            }
        }

        return dec;
    }
};