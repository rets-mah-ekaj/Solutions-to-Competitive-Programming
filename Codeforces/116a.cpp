#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, a, b, capacity = 0, min_capacity = 0;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> a >> b;
    capacity += b - a;
    min_capacity = max(capacity, min_capacity);
  }
  cout << min_capacity;
  return 0;
}
