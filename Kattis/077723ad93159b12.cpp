#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
  }
}
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] strs = br.readLine().split(" ");
        int r = Integer.parseInt(strs[0]), c = Integer.parseInt(strs[1]);
        String[][] s = new String[r][c];
        for (int i = 0; i < r; i++) {
            s[i] = br.readLine().split("");
        }
        int curC = 0, curR = 0, moves = 0;
        for (int i = 0; i < r * c; i++) {
            if (curR < 0 || curC < 0 || curR > r - 1 || curC > c - 1) {
                System.out.println("Out");
                break;
            } else if (s[curR][curC].equals("T")) {
                System.out.println(moves);
                break;
            } else if (s[curR][curC].equals(".")) {
                System.out.println("Lost");
                break;
            } else {
                String st = s[curR][curC];
                moves++;
                s[curR][curC] = ".";
                if (st.equals("N")) {
                    curR--;
                } else if (st.equals("S")) {
                    curR++;
                } else if (st.equals("W")) {
                    curC--;
                } else if (st.equals("E")) {
                    curC++;
                }
            }
        }
    }
}
