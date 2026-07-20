class Solution {
public:
    int minElement(vector<int>& nums) {
    //     int n = nums.size();
    //     vector <int> sum;
    //     for (int i = 0;i<n;i++){
    //         sum[i] = num[i]%10 + num[i]%100 +num[i]%1000; 
    //     }
    //     int min = 0;
    //     for (int i = 0 ; i<n;i++){
    //         if (num[i]>0){
    //             num[i]= min;  
    //         }
    //     }
    // }
          int mini = INT_MAX;

        for (int num : nums) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            mini = min(mini, sum);
        }

        return mini;
    }
};