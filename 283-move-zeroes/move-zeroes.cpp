class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        int i;
        for (i =0; i<n; i++){
            if (nums[i]==0) break;
        }
        j= i;
        for(int k=i+1; k<n; k++){
            if(nums[k]!=0){ swap(nums[k],nums[j]); j++;}
        }
    }
};