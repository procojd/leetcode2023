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
    void solve(TreeNode* root, unordered_map<int,int>&mp,int level)
    {
        if(root==NULL)
            return;
        mp[level]+=root->val;
         solve(root->left,mp,level+1);
         solve(root->right,mp,level+1);
        return;
    }
    int maxLevelSum(TreeNode* root) {
        int level=1;
        unordered_map<int,int>mp;
        solve(root,mp,level);
        int ans=INT_MIN;
        int ids=0;
        for(auto i:mp)
        {
            if(i.second>ans)
            {
                ans=i.second;
                ids=i.first;
            }
            if(i.second==ans&&i.first<ids)
            {
               ids=i.first;
            }
            
        }
        return ids;
       
        
    }
};