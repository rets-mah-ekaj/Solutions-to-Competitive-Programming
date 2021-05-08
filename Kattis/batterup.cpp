#include<iostream>
using namespace std;

int main() {
  int n, i, walk = 0, total = 0;
  float sum = 0;
  cin >> n;
  int arr[n];
  for (i=0; i<n; i++)
    cin >> arr[i];
  for (i=0; i<n; i++) {
    if (arr[i] == -1)
      walk++;
    else {
      total++;
      sum += arr[i];
    }
  }
  cout << sum / total;
}
