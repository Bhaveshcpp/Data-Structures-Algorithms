class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        // sort this on the basis of first element in the sub array//
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);

        // check overlapping-> if intervals[i][0]<=intervals[i-1][1]  then
        // ans[i-1]
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= ans.back()[1]) {

                  ans.back()[1]=(ans.back()[1] >=intervals[i][1])? ans.back()[1]: intervals[i][1];
            }
            else ans.push_back(intervals[i]);
        }
            return ans;
        }
    };