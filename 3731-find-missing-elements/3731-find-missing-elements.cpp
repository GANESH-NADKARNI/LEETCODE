class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        // using bitset O(n)

        bitset<101> present = 0;
        int start = 101, end = 0;
        for(int x : nums){
            present[x] = 1;
            start = min(x,start);
            end = max(x,end);
        }

        vector<int> missingNum;

        for(int i = start + 1; i < end ; i++){
            if(!present[i]) missingNum.push_back(i);
        }

        return missingNum;



// ----------------------------------------------------

        // // using sorting O(nlogn)
        // sort(nums.begin(), nums.end());
        // vector<int> missingNum;
        // int prev = nums[0];

        // for(int i = 1;i < nums.size(); i++){
        //     while(nums[i] != prev + 1){
        //         missingNum.push_back(++prev);
        //     }
        //     prev = nums[i];
        // }
        // return missingNum;




    }
};