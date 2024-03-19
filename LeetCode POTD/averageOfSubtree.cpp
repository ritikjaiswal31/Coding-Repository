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
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        traverse(root, ans);
        return ans;
    }
private:
    pair<int,int> traverse(TreeNode* node, int& ans){
        if(!node) return {0,0};
        auto[left_sum, left_count] = traverse(node->left, ans);
        auto[right_sum, right_count] = traverse(node->right, ans);

        int curr_sum = node->val + left_sum + right_sum;
        int curr_count = 1 + left_count + right_count;

        if(curr_sum / curr_count == node->val) 
        ans++;

        return {curr_sum, curr_count};
    }
};