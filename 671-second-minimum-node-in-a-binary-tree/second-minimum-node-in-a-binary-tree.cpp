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
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> v;
        preorder(root,v);
        set<int> s(v.begin(),v.end());
        if(s.size()==1) return -1;
        else
        {
            auto it= s.begin();
            it++;
            return *it;
        }
    }
    void preorder(TreeNode* Root,vector<int> &v)
{
    if (Root != NULL)
    {
       v.push_back(Root->val);
        preorder(Root->left,v);  
        preorder(Root->right,v); 
    }
}
};