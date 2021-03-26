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
    void sum(TreeNode* root, int &ans, int flag ){
        //int ans = 0;
        if(root == NULL){
            return ;
        }
      if((root->left == NULL) && (root->right == NULL)&& (flag == 1)){
          ans+= root->val;
          return ;
      }
        sum(root->left,ans, 1);
        sum(root->right, ans, 0);
            
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        if(root->left == NULL && root->right == NULL)
               return 0;
        int ans = 0;
     
        
           sum(root, ans, 1); 
        return ans;
            
        
    }
};