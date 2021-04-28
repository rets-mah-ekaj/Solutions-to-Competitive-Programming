#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int activities;
    string origin;
    cin >> activities >> origin;
    int laddu = 0;
    while (activities--) {
      string activity;
      cin >> activity;
      if (activity == "CONTEST_WON") {
        laddu += 300;
        int rank;
        cin >> rank;
        if (rank < 20)
          laddu += (20 - rank);
      }
      else if (activity == "TOP_CONTRIBUTOR")
        laddu += 300;
      else if (activity == "BUG_FOUND") {
        int severity;
        cin >> severity;
        laddu += severity;
      }
      else if (activity == "CONTEST_HOSTED")
        laddu += 50;
    }
    if (origin == "INDIAN")
      cout << laddu / 200 << '\n';
    else
      cout << laddu / 400 << '\n';
  }
  return 0;
}
