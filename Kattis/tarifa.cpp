#include<iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int x, n, used = 0;
  cin >> x >> n;
  for (int i=0; i<n; i++) {
    int temp;
    cin >> temp;
    used += temp;
  }
  cout << (n + 1) * x - used;
}
