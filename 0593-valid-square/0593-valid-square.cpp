class Solution {
private:
    static inline int d(const vector<int>& a, const vector<int>& b) {
        int dx = a[0] - b[0], dy = a[1] - b[1];
        return dx * dx + dy * dy;
    }
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int> s{
            d(p1,p2), d(p1,p3), d(p1,p4),
            d(p2,p3), d(p2,p4), d(p3,p4)
        };
        return !s.count(0) && s.size() == 2;
    
    }
};