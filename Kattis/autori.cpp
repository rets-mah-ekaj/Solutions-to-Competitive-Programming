#include<iostream>
using namespace std;
int main() {
  string name;
  cin >> name;
  for(int i=0; i <= name.size(); ++i) {
    if (i == 0) {
      cout << name[i];
    }
    else if (name[i] == 45) {
      cout << name[i+1];
    }
  }
  return 0;
}
