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
    
    int sum_val(TreeNode* root, int sum){
        
           if(root == NULL)
               return 0;
        sum = (sum<<1) + root->val;
        
        if(root->left == NULL  && root->right == NULL)
            return sum;
       
    
      int    op1 =  sum_val(root->left, sum);
         
     int     op2 =  sum_val(root->right, sum) ;
     
        
       
        return (op1+op2);
    }
    int sumRootToLeaf(TreeNode* root) {
        
        int i = 0;
        if(root == NULL)
            return 0;
        int ans = sum_val(root, 0);
        return ans;
    }
};