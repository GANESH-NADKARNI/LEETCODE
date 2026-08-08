class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0 ;
        int remaining = capacity;

        for(int i = 0; i < plants.size();i++){
            if(plants[i] > remaining){
                steps += 2*i + 1;
                remaining = capacity - plants[i];
            }
            else{
                steps++;
                remaining -= plants[i];
            }
        }

        return steps;
    }
};