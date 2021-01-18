#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long int s, v1, v2, t1, t2;
  cin >> s >> v1 >> v2 >> t1 >> t2;
  v1 = v1 * s + 2 * t1;
  v2 = v2 * s + 2 * t2;
  if (v1 < v2)
    cout << "First";
  else if (v2 < v1)
    cout << "Second";
  else
    cout << "Friendship";
  return 0;
}
