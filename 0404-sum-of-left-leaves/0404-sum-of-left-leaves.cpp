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
    int ans=0;
    int dfs(TreeNode *root,bool f){
        if(!root)
            return 0;
        if(!root->left&&!root->right)
            return f?root->val:0;
        return dfs(root->left,true)+dfs(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        bool f=false;
        return dfs(root,f);
    }
};