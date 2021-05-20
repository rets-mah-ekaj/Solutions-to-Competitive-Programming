#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string read, w;
  int n;
  cin >> read >> n;
  vector <int> v(26, 0);
  for (int i = 0; i < read.size(); ++i)
    ++v[read[i] - 'a'];
  while (n--) {
    int temp = 0;
    cin >> w;
    for (int i = 0; i < w.size(); ++i) {
      if (v[w[i] - 'a'] == 0) {
        cout << "No\n";
        temp = 1;
        break;
      }
    }
    if (temp == 0)
      cout << "Yes\n";
  }
	return 0;
}
