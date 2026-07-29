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
    void inorder(TreeNode* root, vector<int>& nodes) {
        if (root == NULL) return;
        inorder(root->left, nodes);
        nodes.push_back(root->val);
        inorder(root->right, nodes);
    }
    TreeNode* buildBST(int left, int right, vector<int>& nodes) {
        if (left > right) return NULL;
        int mid = (left + right) / 2; 
        TreeNode* newNode = new TreeNode(nodes[mid]);
        newNode->left = buildBST(left, mid - 1, nodes);
        newNode->right = buildBST(mid + 1, right, nodes);

        return newNode;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nodes;
        inorder(root, nodes);
        return buildBST(0, nodes.size() - 1, nodes);
    }
};