class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case: both nodes are null or have the same value
        if (!p && !q) {
            return true;
        }

        // Base case: one node is null or nodes have different values
        if (!p || !q || p->val != q->val) {
            return false;
        }

        // Recursively check the left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
