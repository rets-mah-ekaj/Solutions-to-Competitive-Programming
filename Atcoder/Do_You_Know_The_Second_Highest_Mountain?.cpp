#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, maxi = INT_MIN;
  cin >> n;
  vector <int> height(n);
  vector <string> name(n);
  for (int i = 0; i < n; ++i)
    cin >> name[i] >> height[i];

  for (int i = 0; i < n; ++i)
    maxi = max(maxi, height[i]);

  int key;
  for (int i = 0; i < n; ++i) {
    if (height[i] == maxi) {
      key = i;
      break;
    }
  }

  height.erase(height.begin() + key);
  name.erase(name.begin() + key);
  maxi = INT_MIN;
  for (int i = 0; i < n; ++i)
    maxi = max(maxi, height[i]);
  for (int i = 0; i < n; ++i) {
    if (height[i] == maxi) {
      key = i;
      break;
    }
  }
  cout << name[key];
  return 0;
}
