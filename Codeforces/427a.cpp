#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector <int> v(n);
  for (int i=0; i<n; i++)
    cin >> v[i];
  int untreated = 0, men = 0;
  for (int i=0; i<n; i++) {
    if (v[i] > 0)
      men += v[i];
    else if (v[i] == -1 && men == 0)
      untreated++;
    else
      men--;
  }
  cout << untreated;
  return 0;
}
