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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ds;
        inoder(root,ds);
        return ds;

    }
    void inoder(TreeNode * root , vector<int> &x)
    {
          if(root!=NULL)
          {
            inoder(root->left,x);
            x.push_back(root->val);
            inoder(root->right,x);
          }
    }
};