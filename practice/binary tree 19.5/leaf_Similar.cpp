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
// void getLeafValues(TreeNode* node, vector<int>& leafValues) {
//     if (node == NULL)
//         return;
//     if (node->left == NULL && node->right == NULL)
//         leafValues.push_back(node->val);
//     getLeafValues(node->left, leafValues);
//     getLeafValues(node->right, leafValues);
// }
// class Solution {
// public:
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//         vector<int> v1, v2;
//         getLeafValues(root1, v1);
//         getLeafValues(root2, v2);
//         return v1 == v2;
//     }
// };