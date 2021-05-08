#include<iostream>
using namespace std;

int main() {
  int d, m, days = 0;
  cin >> d >> m;
  for(int i=1; i < m; i++) {
    if (i == 2)
      days += 28;
    else if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12))
      days += 31;
    else
      days += 30;
  }
  days += d;
  if (days % 7 == 0)
    cout << "Wednesday";
  else if (days % 7 == 1)
    cout << "Thursday";
  else if (days % 7 == 2)
    cout << "Friday";
  else if (days % 7 == 3)
    cout << "Saturday";
  else if (days % 7 == 4)
    cout << "Sunday";
  else if (days % 7 == 5)
    cout << "Monday";
  else if (days % 7 == 6)
    cout << "Tuesday";
  return 0;
}
