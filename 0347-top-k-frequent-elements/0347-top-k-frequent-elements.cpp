class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        // Store frequency of each number
        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        // bucket[frequency] = numbers having that frequency
        vector<vector<int>> bucket(n + 1);

        for (auto it : mp) {
            bucket[it.second].push_back(it.first);
        }

        vector<int> ans;

        // Start from highest frequency
        for (int i = n; i >= 1; i--) {

            for (int x : bucket[i]) {

                ans.push_back(x);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};
   