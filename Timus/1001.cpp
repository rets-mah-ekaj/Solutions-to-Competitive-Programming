#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double temp;
  vector <double> v;
  while (cin >> temp && temp != EOF)
    v.push_back(sqrt(temp));
  for (int i = v.size() - 1; i >= 0; --i)
    cout << fixed << setprecision(4) << v[i] << '\n';
  return 0;
}
