#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, total = 0;
  string s;
  cin >> n;
  while (n--) {
    cin >> s;
    if (s == "Icosahedron")
      total += 20;
    else if (s == "Dodecahedron")
      total += 12;
    else if (s == "Octahedron")
      total += 8;
    else if (s == "Cube")
      total += 6;
    else if (s == "Tetrahedron")
      total += 4;
  }
  cout << total;
}
