class Solution {
public:
  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector <vector <int> > ans;
    vector <int> v;
    sort(candidates.begin(), candidates.end());
    help(ans, v, candidates, target, 0);
    return ans;
  }
  void help(vector <vector <int> > &ans, vector <int> v, vector <int> &candidates, int target, int index) {
    if (target == 0) {
      ans.push_back(v);
      return;
    }
    if (target < 0)
      return;
    for (int i=index; i<candidates.size(); i++) {
      if (candidates[i] <= target) {
        v.push_back(candidates[i]);
        help(ans, v, candidates, target - candidates[i], i);
        v.pop_back();
      }
      else
        break;
    }
  }
};
