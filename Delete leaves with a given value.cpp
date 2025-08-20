class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (!root) return nullptr;

        // Recurse on left and right subtrees
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);

        // If current node is a leaf and equals target, delete it
        if (!root->left && !root->right && root->val == target) {
            return nullptr;
        }
        return root;
    }
};
