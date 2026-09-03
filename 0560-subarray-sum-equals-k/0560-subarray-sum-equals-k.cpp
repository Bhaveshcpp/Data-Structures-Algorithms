class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0;
        int prefix_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefix_sum += nums[i];
            int val = prefix_sum - k;
            if (mp.find(val) != mp.end())   count += mp[val];
            mp[prefix_sum]++;
        }
        return count;
    }
    };