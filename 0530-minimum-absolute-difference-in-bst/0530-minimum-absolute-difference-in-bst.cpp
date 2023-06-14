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
    int inorder(TreeNode* root, int& prevElement, int& ans){

        if(root->left) inorder(root->left, prevElement, ans);
        if(prevElement >=0 ) ans = min(ans, abs(prevElement-root->val));
        prevElement = root->val;
        if(root->right) inorder(root->right, prevElement, ans);

        return ans;      


    }
    int getMinimumDifference(TreeNode* root){
        int prevElement = -1;
        int ans = INT_MAX;
        return inorder(root, prevElement, ans);
     
    }
};