class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
    vector<string> a; 
    int x=1;
    for(int v:t) { 
        while(x++<v)
        a.push_back("Push"),a.push_back("Pop"); 
        a.push_back("Push"); 
        } 
    return a;
}
};