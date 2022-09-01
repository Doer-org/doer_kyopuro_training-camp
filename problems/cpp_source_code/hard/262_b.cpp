#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<bool>> x(n, vector<bool>(n));
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    x[u][v] = true;
    x[v][u] = true;
  }

  int ans = 0;
  for (int a = 0; a < n; a++) {
    for (int b = a; b < n; b++) {
      for (int c = b; c < n; c++) {
        if (x[a][b] && x[b][c] && x[c][a]) ans++;
      }
    }
  }
  cout << ans << endl;
}