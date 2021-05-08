#include<iostream>
#include<string>
using namespace std;

int main() {
  bool cup[3] = {true, false, false};
  string moves;
  cin >> moves;
  for (int i = 0; i < moves.size(); i++) {
    if (moves[i] == 'A')
      swap(cup[0], cup[1]);
    else if (moves[i] == 'B')
      swap(cup[1], cup[2]);
    else if (moves[i] == 'C')
      swap(cup[0], cup[2]);
  }
  if (cup[0])
    cout << 1;
  else if (cup[1])
    cout << 2;
  else if (cup[2])
    cout << 3;
}
