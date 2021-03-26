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
    
    int  diameterOfBinaryTree1(TreeNode* root, int &diameter){
         if(root == NULL)
            return 0;
         int op1 = 0;
         int op2 = 0;
         if(root->left)
         op1 = 1+diameterOfBinaryTree1(root->left, diameter);
        if(root->right)
        op2 = 1+diameterOfBinaryTree1(root->right, diameter);
        diameter = max(diameter, op1+op2);
        return max(op1, op2);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int diameter = 0;
        
        diameterOfBinaryTree1(root, diameter);
        return diameter;
     
         
    }
};