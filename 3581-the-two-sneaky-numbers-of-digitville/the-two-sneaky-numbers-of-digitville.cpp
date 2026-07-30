class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector <int> hash(n,0);
        for (int i = 0; i<n; i++){
            hash[nums[i]]++ ;
        }
        vector <int> a;
        for (int i = 0;i<n; i++){
            if (hash[i]>=2){a.push_back(i);}
        }
        return a;
    }
};