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

/*https://leetcode.com/problems/maximum-width-of-binary-tree/ */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        
        queue<pair<TreeNode* , int>>q;
        int res = 0;
        if(root == NULL)
            return 0;
        res =1;
        q.push({root, 0});
        while(!q.empty()){
            
            int count = q.size();
            int strt = q.front().second;
            int end = q.back().second;
            
            res = max(res,  end-strt+1);
            
            for(int i=0; i<count; i++){
                pair<TreeNode* ,  int >p = q.front();
                int indx1 = (p.second - strt);
                //int indx2 = (p.second - strt)+2 ;
                if(p.first->left)
                q.push({p.first->left, 2*indx1+1});
                if(p.first->right)
                q.push({p.first->right, 2*indx1+2});
                q.pop();
                
            }
            
            
        }
        return res;
        
    }
};