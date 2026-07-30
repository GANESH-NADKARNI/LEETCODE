class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {

        vector<int> ans;
        int n = arr.size();

        for (int size = n; size > 1; size--) {

            int mxIdx = 0;

            for (int i = 1; i < size; i++) {
                if (arr[i] > arr[mxIdx])
                    mxIdx = i;
            }

            if (mxIdx == size - 1)
                continue;

            reverse(arr.begin(), arr.begin() + mxIdx + 1);
            ans.push_back(mxIdx + 1);

            reverse(arr.begin(), arr.begin() + size);
            ans.push_back(size);
        }

        return ans;
    }
};