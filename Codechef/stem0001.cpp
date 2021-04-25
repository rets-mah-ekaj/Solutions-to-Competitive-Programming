#include<bits/stdc++.h>
using namespace std;

long long countTrue(vector <string> t) {
  int x = 0;
  for (int i = 0; i < t.size(); ++i) {
    transform(t[i].begin(), t[i].end(), t[i].begin(), ::tolower);
    if (t[i] == "true")
      ++x;
  }
  return x;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <string> v(6);
  v[0] = "True";
  v[1] = "false";
  v[2] = "true";
  v[3] = "true";
  v[4] = "false";
  v[5] = "false";
  cout << countTrue(v);
  return 0;
}
