class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;

        for (auto x : strs) {
            string temp = x;
            sort(temp.begin(),
                 temp.end()); // Sort the temporary copy to create the key
            umap[temp].push_back(
                x); // Use the sorted key to store the original string
        }

        for (auto x : umap) {
            ans.push_back(x.second); // Direct push_back without creating
                                     // another temp variable
        }
        return ans;
    }
};