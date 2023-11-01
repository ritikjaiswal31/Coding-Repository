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
    unordered_map<int, int> map;
    void dfs(TreeNode* root){
        if(!root) return;
        else map[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int max = -1;
        dfs(root);
        for(auto e : map){
            if(e.second == max) ans.push_back(e.first);
            else if(e.second > max){
                max = e.second;
                ans = {e.first};
            }
        }

        return ans;
        
    }
};