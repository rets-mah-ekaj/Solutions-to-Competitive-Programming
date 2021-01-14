#include<bits/stdc++.h>
using namespace std;
#define MAX 5000
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, t1[MAX], t2[MAX], t3[MAX], x = 0, y = 0, z = 0, w, s;
  cin >> n;
  int a[n];
  for (int i=0; i<n; i++)
    cin >> a[i];
  for (int i=0; i<n; i++) {
    if (a[i] == 1) {
      t1[x] = i+1;
      x++;
    }
    else if (a[i] == 2) {
      t2[y] = i+1;
      y++;
    }
    else {
      t3[z] = i+1;
      z++;
    }
  }
  s = min(x, y);
  w = min(s, z);
  cout << w << '\n';
  for (x=0, y=0, z=0; x<w, y<w, z<w; x++, y++, z++)
    cout << t1[x] << ' ' << t2[y] << ' ' << t3[z] << '\n';
  return 0;
}
