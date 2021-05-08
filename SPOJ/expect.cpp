#include<iostream>
#include<thread>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  while (true) {
    cin >> t;
    cout << t << "\n" << flush;
    if (t == 42)
      break;
  }
  return 0;
}
