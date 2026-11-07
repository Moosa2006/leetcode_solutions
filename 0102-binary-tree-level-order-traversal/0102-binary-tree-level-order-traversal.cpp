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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> sol;
        if(root == nullptr) return sol;
        queue<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            int size = st.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode *node = st.front();
                st.pop();
                if(node->left != nullptr) st.push(node->left);
                if(node->right != nullptr) st.push(node->right);
                level.push_back(node->val);
            }
            sol.push_back(level);
        }
        return sol;
    }
};