class Solution {
public:
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if (root == NULL)
      return {};
    int count = 0;
    queue <TreeNode*> q = {};
    vector <vector <int> > res = {};
    vector <int> aux = {};
    q.push(root);
    while (q.empty() == false) {
      int size = q.size();
      aux = {};
      while (size--) {
        aux.push_back(q.front()->val);
        if (q.front()->left)
          q.push(q.front()->left);
        if (q.front()->right)
          q.push(q.front()->right);
        q.pop();
      }
      count++;
      if ((count & 1) == 0)
        reverse(aux.begin(), aux.end());
      res.push_back(aux);
    }
    return res;
  }
};
