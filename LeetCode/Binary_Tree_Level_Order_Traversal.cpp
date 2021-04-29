class Solution {
public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    vector <vector <int> > v;
    if (root == NULL)
      return v;
    queue <TreeNode* > q;
    q.push(root);
    int i = -1;
    while (q.empty() == false) {
      int t = q.size();
      vector <int> temp;
      while (t--) {
        TreeNode* flag = q.front();
        temp.push_back(flag->val);
        q.pop();
        if (flag->left) {
          q.push(flag->left);
        }
        if (flag->right) {
          q.push(flag->right);
        }
      }
      v.push_back(temp);
    }
    return v;
  }
};
