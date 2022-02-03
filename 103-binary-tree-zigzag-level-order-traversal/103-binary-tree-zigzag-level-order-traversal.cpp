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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> v;
        
        if(!root)
            return v;
        
        queue<TreeNode*>q;
        
        q.push(root);
        bool ltr=true;
        
        while(!q.empty()){
            
            int l=q.size();
            
            vector<int>r(l);
            
            for(int i=0;i<l;i++){
                
                TreeNode *temp=q.front();
                q.pop();
                int index=ltr?i:l-1-i;
                
                r[index]=temp->val;
                
                if(temp->left)
                    q.push(temp->left);
                
                if(temp->right)
                    q.push(temp->right);
                
                
                
            }
            
            ltr=!ltr;
            
            v.push_back(r);
            
        }
        
        return v;
        
    }
};