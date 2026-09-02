class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int N = nums.size();
        int curr_sum = 0;
        for (int j = 0; j < N; j++) {
            int curr_sum = 0;
            for (int i = j; i < N; i++) {
                curr_sum = curr_sum + nums[i];
                if (curr_sum == k) count++;
            }
        }
            return count;
        }
    };