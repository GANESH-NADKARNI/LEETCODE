class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max_cost = 0 ;
        for(int cost: costs){
            if(max_cost < cost){
                max_cost = cost;
            }
        }
        vector<int> counts(max_cost+1,0);
        for(int cost: costs){
            counts[cost]++;
        }

        int total_bars = 0;

        for(int price = 1; price <= max_cost; price++){
            if(counts[price] == 0){
                continue;
            }
            if(coins < price){
                break;
            }
                
            int n = min(counts[price], coins / price);

            coins -= n * price;
            total_bars += n;
        }

        
        return total_bars;
        
    }
};