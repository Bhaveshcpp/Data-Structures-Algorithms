class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int x : nums) {
            sum += x;

            int val = sum - k;

            if (mp.find(val) != mp.end()) {
                count += mp[val];
            }

            mp[sum]++;
        }

        return count;
    }
};