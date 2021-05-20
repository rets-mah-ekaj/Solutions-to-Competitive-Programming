#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, temp;
  cin >> n >> m;
  vector <int> v;
  for (int i = 0; i < n; ++i) {
    cin >> temp;
    if (temp == -1) {
      int b = v[*max_element(v.begin(), v.begin() + i)];
      cout << b << '\n';
      auto i = find(v.begin(), v.end(), b);
      v.erase(i);
      v.shrink_to_fit();
    }
    else
      v.push_back(temp);
  }
}
