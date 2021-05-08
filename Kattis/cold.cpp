#include<iostream>
using namespace std;

int main() {
  int n, count = 0, i;
  cin >> n;
  int arr[n];
  for (i=0; i<n; i++)
    cin >> arr[i];
  for(i=0; i<n; i++)
    if (arr[i] < 0)
      count++;
  cout << count;
}
