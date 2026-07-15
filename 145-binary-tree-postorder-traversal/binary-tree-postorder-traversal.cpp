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
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> s;
        postorder(root,s);
        return s;
    }
    void postorder(TreeNode * root, vector<int> &s)
    {
        if(root)
        {
            postorder(root->left,s);
            postorder(root->right,s);
            s.push_back(root->val);
        }
    }
};