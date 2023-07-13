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
void getPreValue(TreeNode* node, vector<int>& leafValues) {
    if (node == NULL)
        return;
    leafValues.push_back(node->val);
    cout<<node->val<<" ";
    getPreValue(node->left, leafValues);
    getPreValue(node->right, leafValues);
}

void getPostValue(TreeNode* node, vector<int>& leafValues) {
    if (node == NULL)
        return;
    getPostValue(node->left, leafValues);
    getPostValue(node->right, leafValues);
    leafValues.push_back(node->val);
    cout<<endl;
    cout<<node->val<<" ";
}
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL || q == NULL)
            return false;
        if (p->val != q->val)
            return false;
        
        vector<int> v1, v2;
        getPreValue(p, v1);
        getPreValue(q, v2);
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};