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
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        bool isLeft = isUnivalTree(root->left);
        bool isRight = isUnivalTree(root->right);

        if(!isLeft || !isRight) return false;

        if(root->left != NULL){
            if(root->val != root->left->val){
                return false;
            }
        }

        if(root->right != NULL){
            if(root->val != root->right->val){
                return false;
            }
        }

        return true;
    }
};