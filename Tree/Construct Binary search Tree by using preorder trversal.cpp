
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
    TreeNode* bst(vector<int>preorder){
        
        if(preorder.size() == 0)
            return NULL;
     
        TreeNode* root = new TreeNode(preorder[0]);
        if(preorder.size() == 1)
            return root;
        vector<int>left;
        vector<int>right;
        for(int i=1; i<preorder.size(); i++){
            if(preorder[0]>preorder[i])
                left.push_back(preorder[i]);
            if(preorder[0]<preorder[i])
                right.push_back(preorder[i]);
        }
        
        root->left = bst(left);
        root->right = bst(right);
        return root;
           
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        return bst(preorder);
        
    }
};