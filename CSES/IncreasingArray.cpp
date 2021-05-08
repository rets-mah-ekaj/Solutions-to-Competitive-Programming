#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n, total = 0;
  cin >> n;
  long long int arr[n];
  for(int i=0; i < n; i++) {
    if (i == 0)
      cin >> arr[i];
    else {
      cin >> arr[i];
      if (arr[i] < arr[i-1]) {
        total += arr[i-1] - arr[i];
        arr[i] = arr[i-1];
      }
    }
  }
  cout << "\n" << total;
  return 0;
}
