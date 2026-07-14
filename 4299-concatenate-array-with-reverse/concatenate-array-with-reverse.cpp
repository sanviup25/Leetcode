class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector <int> v(2*n);
        for (int i = 0; i <n; i++){
            v[i] = nums[i];
        }
        int j = 1;
        for (int i = n ; i<2*n;i++){
            
            v[i] = nums[n-j];
            j++;
            }
        return v;
    };
};