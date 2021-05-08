#include<iostream>
using namespace std;

int main() {
  int l, x, deny = 0;

  cin >> l >> x;
  for(int i=0; i < x; i++) {
    string cmd;
    int k;
    cin >> cmd >> k;
    if ((cmd == "enter") && (l - k >= 0)) 
      l = l - k;

    else if ((cmd == "enter") && (l - k < 0))
      deny += 1;

    else if (cmd == "leave")
      l = l + k;
    }
    cout << deny;
    return 0;
}
