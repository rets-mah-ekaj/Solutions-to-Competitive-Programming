#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  if (s == "vertebrado") {
    cin >> s;
    if (s == "ave") {
      cin >> s;
      if (s == "carnivoro")
        cout << "aguia";
      else
        cout << "pomba";
    }
    else {
      cin >> s;
      if (s == "onivoro")
        cout << "homem";
      else
        cout << "vaca";
    }
  }
  else {
    cin >> s;
    if (s == "inseto") {
      cin >> s;
      if (s == "hematofago")
        cout << "pulga";
      else
        cout << "lagarta";
    }
    else {
      cin >> s;
      if (s == "hematofago")
        cout << "sanguessuga";
      else
        cout << "minhoca";
    }
  }
  cout << '\n';
  return 0;
}
