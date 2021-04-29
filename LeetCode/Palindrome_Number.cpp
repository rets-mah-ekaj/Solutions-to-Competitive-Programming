class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0)
      return false;
    if (x == 0)
      return true;
    if (x % 10 == 0)
      return false;
    else {
      long int rev = 0, num = x, n = 0, temp;
      do {
        n++;
        num /= 10;
      } while (num != 0);
      num = x;
      while (n != 0) {
        rev += (num % 10) * pow(10, n-1);
        num /= 10;
        n--;
      }
      if (rev == x)
        return true;
      else
        return false;
    }
  }
};
