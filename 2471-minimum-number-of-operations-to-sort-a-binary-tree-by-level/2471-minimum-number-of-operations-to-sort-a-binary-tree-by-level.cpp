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
    void  c(vector<int>&a){
        map<int,int>m;
        vector<int>t;
        for(int i=0;i<a.size();i++){
            m[a[i]]=i;
            t.push_back(a[i]);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<t.size();i++){
            if(a[i]!=t[i]){
                m[t[i]]=m[a[i]];
                swap(t[i],t[m[a[i]]]);
                m[a[i]]=m[t[i]];
                ans++;
            }
        }
        
    }
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>a;
            int n=q.size();
            for(int i=0;i<n;i++){
                auto t=q.front();
                q.pop();
                a.push_back(t->val);
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            c(a);
        }
        return ans;
    }
};