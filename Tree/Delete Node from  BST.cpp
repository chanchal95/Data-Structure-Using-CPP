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
    
    int max_val(TreeNode* root){
        if(root == NULL)
            return INT_MIN;
    
      int op1 = max(root->val,max_val(root->left));
       
        
        
        int op2 = ( root->val,max_val(root->right));
        return max(op1, op2);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        
        if(root == NULL)
            return NULL;
        
        if(root->val>key){
            root->left =  deleteNode(root->left, key);
            
        }
     else  if(root->val<key)
        {
            root->right = deleteNode(root->right, key);
        }
        else{
            if(root->left != NULL && root->right != NULL)
            {
                int mx = max_val(root->left);
                root->val = mx;
                //cout<<mx<<endl;
              root->left =   deleteNode(root->left, mx);
                return root;
                
            }
            else if(root->left == NULL && root->right ==NULL)
                return NULL;
            
            else if(root->left == NULL )
                return root->right;
             if(root->right == NULL)
                return root->left;
    
                
        }
        return root;
    }
};