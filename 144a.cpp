#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, maxValue = 0, minValue = 1000, maxIndex = 0, minIndex = 0;
  cin >> n;
  vector <int> v(n);
  for (int i=0; i<n; i++) {
    cin >> v[i];
    if (v[i] > maxValue) {
      maxIndex = i;
      maxValue = v[i];
    }
    if (v[i] <= minValue) {
      minValue = v[i];
      minIndex = i;
    }
  }
  if (maxIndex > minIndex)
    cout << maxIndex + n - minIndex - 2;
  else
    cout << maxIndex + n - minIndex - 1;
  return 0;
}
