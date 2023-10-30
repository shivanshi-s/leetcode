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
    void flatten(TreeNode* root) {
        if (root == nullptr) return;
        flatten(root->left);
        //save the right side
        TreeNode *temp = root->right;
        // connecting left to right
        root->right = root->left;
        root->left = NULL;

        TreeNode *rightmost = root;
        while(rightmost->right){
            rightmost = rightmost->right;
        }
        //attaching
        rightmost->right = temp;

        flatten(temp);

    }
};