class Solution {
public:
  int reverse(int x) {
    int num = x;
    int n = 0;
    do {
      n++;
      num /= 10;
    } while (num != 0);
    long int rev = 0;
    for (int i=n; i>=0; i--) {
      rev += ((x % 10) * pow(10, i-1));
      x /= 10;
    }
    if (rev >= INT_MAX || rev <= INT_MIN)
      return 0;
    return rev;
  }
};
