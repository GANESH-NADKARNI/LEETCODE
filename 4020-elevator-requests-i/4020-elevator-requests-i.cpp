class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int currfloor = requests[0], time = requests[0];

        for(int i = 1;i < requests.size(); i++){
            time += abs(requests[i] - currfloor);
            currfloor = requests[i];
        }

        return time;
    }
};