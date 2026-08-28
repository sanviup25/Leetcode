class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v;
        
        sort(nums.begin(), nums.end());

        int mini = nums[0];
        int maxi = nums[nums.size() - 1];

        int j = 0;

        for(int i = mini; i <= maxi; i++) {
            if(nums[j] == i) {
                j++;
            }
            else {
                v.push_back(i);
            }
        }

        return v;
    }
};