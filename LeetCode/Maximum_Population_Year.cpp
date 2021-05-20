class Solution {
public:
  int maximumPopulation(vector<vector<int>>& logs) {
    int mini = INT_MAX, maxi = INT_MIN, n = logs.size();
    for (int i = 0; i < n; ++i) {
      mini = min(mini, logs[i][0]);
      maxi = max(maxi, logs[i][1]);
    }

    vector <int> v(maxi + 1, 0);
    for (int i = 0; i < n; ++i)
      for (int j = logs[i][0]; j < logs[i][1]; ++j)
        ++v[j];

    int max_year = max_element(v.begin(), v.end()) - v.begin();
    for (int i = 0; i < n; ++i)
      if (logs[i][0] == max_year)
        return logs[i][0];
    return 0;
  }
};
