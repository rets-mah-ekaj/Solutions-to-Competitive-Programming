#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  char c;
  cin >> c;
  cout << ((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? "Vowel" : "Consonant");
  return 0;
}
