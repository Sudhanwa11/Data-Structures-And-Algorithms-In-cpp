class Solution {
public:
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        // Base case: both nodes are null
        if (!t1 && !t2) {
            return true;
        }
        
        // Base case: one node is null or nodes have different values
        if (!t1 || !t2 || t1->val != t2->val) {
            return false;
        }

        // Recursive check for mirror subtrees
        return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        // Call the helper function to check symmetry
        return isMirror(root, root);
    }
};
