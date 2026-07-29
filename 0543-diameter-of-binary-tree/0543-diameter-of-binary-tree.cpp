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
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        DBT(root,res);
        return res;
    }
private:
    int DBT(TreeNode* root,int &res){
        if(!root)return 0;
        int left = DBT(root->left,res);
        int right = DBT(root->right,res);
        res = max(res,left+right);
        return 1+max(left,right);
    }
};