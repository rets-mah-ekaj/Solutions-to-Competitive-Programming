#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int temp[n+1], result[1000];
  for (int i=0; i<n; i++)
    cin >> temp[i];
  for (int i=0; i<n; i++)
    result[temp[i]] = i + 1;
  for (int i=1; i<=n; i++)
    cout << result[i] << ' ';
  return 0;
}
