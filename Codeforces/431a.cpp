#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <int> v(5);
  v.push_back(0);
  for (int i=1; i<=4; ++i)
    cin >> v[i];
  string s;
  cin >> s;
  int total = 0;
  for (int i=0; i< s.size(); i++)
    total += v[s[i] - '0'];
  cout << total;
  return 0;
}
