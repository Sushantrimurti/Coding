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
    
    
    void preorder(TreeNode* root,int low,int high,int &s){
        
        if(!root)
            return;
        if(root->val>=low && root->val<=high)
            s+=root->val;
        
        preorder(root->left,low,high,s);
        preorder(root->right,low,high,s);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int s=0;
        
        preorder(root,low,high,s);
        
        return s;
        
        
    }
};