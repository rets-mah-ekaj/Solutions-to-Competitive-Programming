#include<bits/stdc++.h>
using namespace std;

int stoi(char s) {
  int x = s - '0';
  return x;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, total = 0, rem;
  string s1, s2;
  cin >> n >> s1 >> s2;
  for (int i=0; i<n; i++) {
    rem = abs(stoi(s1[i]) - stoi(s2[i]));
    total += min(rem, 10 - rem);
  }
  cout << total;
  return 0;
}
