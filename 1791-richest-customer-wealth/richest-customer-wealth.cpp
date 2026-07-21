class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int maxw = INT_MIN;
        vector <int> wealth (n);
        for(int i = 0; i < n;i++){
            for(int j = 0 ; j< m; j++){
             wealth[i] += accounts[i][j];
            }
         maxw = max(maxw,wealth[i]);
        }
        return maxw;
    }
};