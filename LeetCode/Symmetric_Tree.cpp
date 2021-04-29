class Solution {
public:
  bool isSymmetric(TreeNode* root) {
    if (root == NULL)
      return true;
    return isMirror(root->left,root->right);
  }
  bool isMirror(TreeNode* node1, TreeNode* node2) {
    if (node1 && node2) {
      if (node1->val != node2->val)
        return false;
      return (isMirror(node1->left, node2->right) &&
        isMirror(node1->right, node2->left));
    }
    return (node1 == NULL && node2 == NULL);
  }
};
