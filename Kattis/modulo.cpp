#include<iostream>
using namespace std;

int main() {
  bool ans[42];
  for(int i=0; i < 42; i++)
    ans[i] = false;
  for(int i=0; i < 10; i++) {
    int temp;
    cin >> temp;
    ans[temp % 42] = true;
  }
  int total = 0;
  for(int i=0; i < 42; i++)
    if(ans[i])
      total++;
  cout << total;
  return 0;
}
