#include<bits/stdc++.h>
using namespace std;

double pi = 3.14159;

double areaTriangle(double a, double c) {
  return a * c * 0.5;
}

double areaCircle(double c) {
  return pi * c * c;
}

double areaTrapezium(double a, double b, double c) {
  return (a + b) * c * 0.5;
}

double areaSquare(double b) {
  return b * b;
}

double areaRectangle(double a, double b) {
  return a * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaTriangle(a, c) << '\n';
    cout << "CIRCULO: " << areaCircle(c) << '\n';
    cout << "TRAPEZIO: " << areaTrapezium(a, b, c) << '\n';
    cout << "QUADRADO: " << areaSquare(b) << '\n';
    cout << "RETANGULO: " << areaRectangle(a, b) << '\n';
    return 0;
}
