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

    int helper(TreeNode* root){
        if(root == nullptr) return 0;

        int left = 0;
        int right = 0; 

        left = helper(root->left);
        right = helper(root->right);

        if(abs(left-right)>1) return 1e6;
        return 1+ max(left,right);
    }

    bool isBalanced(TreeNode* root) {
       int ans = 0;
       ans = helper(root);

       if(ans>=6000) return false;
        return true;
    }
};