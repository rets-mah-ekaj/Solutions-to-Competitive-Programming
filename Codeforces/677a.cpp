#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, h, count = 0, temp;
  cin >> n >> h;
  for (int i=0; i<n; i++) {
    cin >> temp;
    if (temp > h)
      count += 2;
    else
      count++;
  }
  cout << count;
  return 0;
}
