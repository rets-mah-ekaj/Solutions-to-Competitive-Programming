#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, count = 0;
  cin >> n;
  vector <string> s(n);
  for (int i=0; i<n; i++)
    cin >> s[i];
  for (int i=0; i<n-1; i++)
    if ((s[i] == "01" && s[i+1] == "10") || (s[i] == "10" && s[i+1] == "01"))
      count++;
  cout << count + 1;
  return 0;
}
