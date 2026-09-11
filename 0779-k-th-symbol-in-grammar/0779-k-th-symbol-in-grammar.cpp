class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1){
            return 0;
        }

        int mid = (pow(2,n - 1) / 2);

        if(mid >= k){ 
            return kthGrammar(n - 1, k);
        }

        k = k - mid ;

        return !(int)kthGrammar(n - 1, k);

    
    }
};