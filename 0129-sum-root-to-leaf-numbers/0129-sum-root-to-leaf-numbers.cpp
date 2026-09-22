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
int result=0;
    int sum=0;
    int sumNumbers(TreeNode* root) {
    
        if(root==nullptr) return result;
        int oldsum=sum;
        sum=sum*10+root->val;
        if(root->left==nullptr&& root->right==nullptr){
            result+=sum;
        }
        sumNumbers(root->left);
        sumNumbers(root->right);
        sum=oldsum;
        return result;
    }
};