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
    int hight(TreeNode* root, int &p, int x, int h ){
        
        
        if(root == NULL)
            return 0;
        
        if(root->val == x)
            return h;
        p = root->val;
        int left = hight(root->left, p, x, h+1);
        if(left)
            return left;
        p = root->val;
        int right = hight(root->right, p, x, h+1);
        return right;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(root->val == x || root->val == y)
            return false;
        
        int prntx = -1;
        int h1 = hight(root, prntx, x, 0);
        int prnty = -1;
        int h2 = hight(root, prnty, y, 0);
        
        if(h1 == h2 && prntx != prnty)
            return true;
        else
            return false;
        
    }
};