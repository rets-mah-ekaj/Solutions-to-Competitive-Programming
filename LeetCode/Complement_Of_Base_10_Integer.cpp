class Solution {
public:
  int bitwiseComplement(int n) {
    int x = n, rem = 0;
    if (x == 0)
      return 1;
    stack <int> s;
    vector <int> v;
    while (x != 0) {
      rem = (x % 2);
      s.push(rem);
      x = (int)(x / 2);
    }
    while (s.empty() != true) {
      if (s.top() == 1)
        v.push_back(0);
      else if (s.top() == 0)
        v.push_back(1);
      s.pop();
    }
    long long sum = 0;
    for (int i=0; i<v.size(); i++)
      sum += v[i] * (pow(2, v.size() - i - 1));
    return sum;
  }
};
