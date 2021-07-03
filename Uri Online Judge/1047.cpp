#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int st, sm, et, em, fm, ft;
  cin >> st >> sm >> et >> em;
  ft = et - st;
  if (ft < 0)
      ft = 24 + et - st;
  fm = em - sm;
  if (fm < 0) {
    fm = 60 + em - sm;
    --ft;
  }
  if (et == st && em == sm)
    cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
  else
    cout << "O JOGO DUROU " << ft << " HORA(S) E " << fm << " MINUTO(S)\n";
  return 0;
}
