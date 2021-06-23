#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

	float a, b, c, d, m, f;
	cin >> a >> b >> c >> d;
	a = (a * 20)/100;
	b = (b * 30)/100;
	c = (c * 40)/100;
	d = (d * 10)/100;
	m = a + b + c + d;

	if (m >= 7.0)
		printf("Media: %.1f\nAluno aprovado.\n", m);
  else if (m < 5.0)
		printf("Media: %.1f\nAluno reprovado.\n", m);
  else {
		cin >> f;
		printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\n", m, f);
		if ((m + f) / 2 < 5.0)
      printf("Aluno reprovado.\nMedia final: %.1f\n", (m + f) / 2);
		else
      printf("Aluno aprovado.\nMedia final: %.1f\n", (m + f) / 2);
	}
	return 0;
}
