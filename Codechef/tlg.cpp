#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, player1, player2, s1 = 0, s2 = 0, temp[n], leader[n], lead = 0, winner;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> player1 >> player2;
    s1 = player1 + s1;
    s2 = player2 + s2;
    if (s1 > s2) {
      temp[i] = s1 - s2;
      leader[i] = 1;
    }
    else {
      temp[i] = s2 - s1;
      leader[i] = 2;
    }
  }
  for (int i=0; i<n; i++) {
    if (temp[i] > lead) {
      lead = temp[i];
      winner = leader[i];
    }
  }
  cout << winner << ' ' << lead;
  return 0;
}
