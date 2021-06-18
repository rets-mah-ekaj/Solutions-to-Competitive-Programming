#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int number, hours;
    double rate;
    cin >> number >> hours >> rate;
    cout << "NUMBER = " << number << '\n';
    cout << "SALARY = U$ " << fixed << setprecision(2) << hours * rate << '\n'; 
    return 0;
}
