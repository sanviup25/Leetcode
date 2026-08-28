class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map <int, int> mpp;
        vector <int> ret;
        int a, b, i, more;
        for(i=0; i<n; i++){
            a = nums[i];
            more = target - a;
            if(mpp.find(more) != mpp.end()){
                b = mpp[more];
                ret.push_back(b);
                ret.push_back(i);
            } 
            mpp [a] = i;
        }
        return ret;
    }
};