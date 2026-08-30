class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        // Step 1: Sort by starting time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        // Add the first interval
        ans.push_back(intervals[0]);

        // Step 2: Process remaining intervals
        for (int i = 1; i < intervals.size(); i++) {

            // Overlapping
            if (intervals[i][0] <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }

            // Non-overlapping
            else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};