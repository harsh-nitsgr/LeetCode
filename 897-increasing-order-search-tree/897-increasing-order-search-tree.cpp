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
    TreeNode* res=new TreeNode(-1);
    TreeNode* res1=res;
    
    void inOrder(TreeNode* root){
        if(root==nullptr)return;
        inOrder(root->left);
        if(res->val==-1)res1->val=root->val;
        else {res1->right=new TreeNode(root->val);res1=res1->right;}
        inOrder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inOrder(root);
        return res;
    }
};