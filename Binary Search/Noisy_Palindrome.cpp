bool solve(string s) {
  string res = "", temp = "";
  for (int i = 0; i < s.length(); ++i)
    if (s[i] >= 97 && s[i] <= 122) {
      res += s[i];
      temp += s[i];
    }
  reverse(res.begin(), res.end());
  if (temp == res)
    return true;
  else
    return false;
}
