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

/* Question : https://leetcode.com/problems/sum-root-to-leaf-numbers/ */
class Solution {
public:
    
    int sum(TreeNode* root, int sum1){
        if(root == NULL)
            return 0;
        if(root->left == NULL && root->right == NULL)
            return (sum1*10 + root->val);
        sum1 = sum1*10 + root->val;
        int op1 = sum(root->left, sum1 );
      
        int op2 = sum(root->right, sum1);
        return (op1+op2);
    }
    int sumNumbers(TreeNode* root) {
        
        
      //  int sum = 0;
        return sum(root, 0);
        
       
        
        
    }
};