#include<iostream>
using namespace std;

int myfunc(int a, int b, int c);

int main() {
  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;
  cout << myfunc(x1, x2, x3) << " " << myfunc(y1, y2, y3);
}

int myfunc(int a, int b, int c) {
  if (a==b)
    return c;
  if (a==c)
    return b;
  return a;
}
