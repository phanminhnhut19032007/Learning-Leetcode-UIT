class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (root == nullptr) return result; 
        Preoder(root, "", result);
        return result;
    }

  void Preoder(TreeNode *root ,string current ,vector<string> &s ){
    if(root)
    {
        if(current.empty()) current+=to_string(root->val);
        else
        {
            current+="->"+to_string(root->val);
        }
        if(root->left == NULL && root->right==NULL)
        {
            s.push_back(current);
        }
        Preoder(root->left,current,s);
        Preoder(root->right,current,s);
    }
  }
};