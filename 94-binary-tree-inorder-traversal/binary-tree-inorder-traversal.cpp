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
    vector<int> inorderTraversal(TreeNode* root) {

        stack<TreeNode*> st;
        vector<int> inorder;

        TreeNode* curr = root;

        while(curr != NULL || !st.empty()) {

            // Go as far left as possible
            while(curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }

            // Process the top node
            curr = st.top();
            st.pop();

            inorder.push_back(curr->val);

            // Move to right subtree
            curr = curr->right;
        }

        return inorder;
    }
};
