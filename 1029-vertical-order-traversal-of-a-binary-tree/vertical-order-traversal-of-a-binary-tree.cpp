/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
private:
    // Helper function using Depth First Search (DFS)
    void dfs(TreeNode* node, int row, int col, map<int, map<int, multiset<int>>>& nodes) {
        if (!node) return;

        // Store the value into the nested map: col -> row -> multiset (sorted values)
        nodes[col][row].insert(node->val);

        // Traverse left (row + 1, col - 1) and right (row + 1, col + 1)
        dfs(node->left, row + 1, col - 1, nodes);
        dfs(node->right, row + 1, col + 1, nodes);
    }

public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // map automatically keeps columns sorted (left to right)
        // nested map keeps rows sorted (top to bottom)
        // multiset keeps node values sorted for identical (col, row) coordinates
        map<int, map<int, multiset<int>>> nodes;
        
        // Populate coordinate data
        dfs(root, 0, 0, nodes);

        vector<vector<int>> result;

        // Traverse through sorted columns
        for (auto& [col, rowMap] : nodes) {
            vector<int> colValues;
            for (auto& [row, valSet] : rowMap) {
                // Insert elements in sorted order for this column
                colValues.insert(colValues.end(), valSet.begin(), valSet.end());
            }
            result.push_back(colValues);
        }

        return result;
    }
};