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
    bool check(TreeNode* root,TreeNode* subRoot){
        if(root==nullptr && subRoot==nullptr) return true;

        if(root==nullptr || subRoot==nullptr) return false;

        if(root->val!=subRoot->val) return false;

        bool l=check(root->left,subRoot->left);
        bool r=check(root->right,subRoot->right);

        return l&&r;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==nullptr) return true;
        if(root==nullptr) return false;

        if(check(root,subRoot)){
            return true;
        }

        bool l=isSubtree(root->left,subRoot);
        bool r=isSubtree(root->right,subRoot);

        return l||r;
    }
};
