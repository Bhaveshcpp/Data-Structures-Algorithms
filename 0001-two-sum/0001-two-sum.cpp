class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> TS;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if ( i!=j && nums[i] + nums[j] == target) {
                    TS.push_back(i);
                    TS.push_back(j);
                }
            }
        }
        return TS;
    }
};