class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total_sum=nums[0];
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
         curr_sum = max(nums[i]+curr_sum,nums[i]);
         total_sum=max(curr_sum,total_sum);
        }
     return total_sum;
    }
};