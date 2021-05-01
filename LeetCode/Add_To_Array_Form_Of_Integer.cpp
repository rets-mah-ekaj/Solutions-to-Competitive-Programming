class Solution {
public:
  vector<int> addToArrayForm(vector<int>& A, int k) {
    int size = A.size();
    for (int i=size - 1; i >= 0 && k != 0; i--) {
      k += A[i];
      A[i] = k % 10;
      k /= 10;
    }
    while (k != 0) {
      A.insert(A.begin(), k % 10);
      k /= 10;
    }
    return A;
  }
};
