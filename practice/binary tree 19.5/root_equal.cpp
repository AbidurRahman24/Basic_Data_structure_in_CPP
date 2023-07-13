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
// class Solution {
// public:
//     bool checkTree(TreeNode* root) {
//         // int ro = root;
//         bool l = root->left;
//         bool r = root->right;
//         bool sum = l + r;
//         cout<<sum<<endl;
//         cout<<root->val<<endl;
//         if(root->val == sum) return true;
//         else return false;
//     }
// };