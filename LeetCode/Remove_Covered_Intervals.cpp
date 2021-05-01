bool check(vector <int> &a, vector <int> &b) {
  if (a[0] == b[0])
    return a[1] > b[1];
  return a[0] < b[0];
}
class Solution {
public:
  int removeCoveredIntervals(vector<vector<int>>& v) {
    sort(v.begin(), v.end(), check);
    int count = 1, start = v[0][0], end = v[0][1];
    for (int i=1; i < v.size(); i++) {
      if (start <= v[i][0] && end >=v[i][1])
        continue;
      else {
        start = min(start, v[i][0]);
        end = max(end, v[i][1]);
        count++;
      }
    }
    return count;
  }
};
