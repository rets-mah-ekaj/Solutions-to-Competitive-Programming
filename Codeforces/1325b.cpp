#include<bits/stdc++.h>
#include<set>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, temp;
  cin >> t;
  while (t--) {
    cin >> n;
    set <int> s;
    while (n--) {
      cin >> temp;
      s.insert(temp);
    }
    cout << s.size() << '\n';
  }
  return 0;
}
