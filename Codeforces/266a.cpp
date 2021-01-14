#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, count = 0;
  string s;
  cin >> n >> s;
  for (int i=0; i<n-1; i++)
    if (s[i] == s[i+1]) {
      if (s[i] == 'R')
        count++;
      else if (s[i] == 'G')
        count++;
      else if (s[i] == 'B')
        count++;
    }
  cout << count;
  return 0;
}
