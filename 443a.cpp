#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  char s[1001];
  gets(s);
  int count = 0;
  sort(s, s + strlen(s));
  for (int i=0; i<strlen(s) - 1; i++) {
    if (s[i] >= 97 && s[i] <= 122) {
      count++;
      if (s[i] == s[i+1])
        count--;
    }
  }
  cout << count;
  return 0;
}
