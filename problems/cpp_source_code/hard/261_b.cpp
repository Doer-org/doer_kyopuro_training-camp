#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  string ans = "correct";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      if (a[i][j] == 'W' && a[j][i] != 'L') ans = "incorrect";
      if (a[i][j] == 'D' && a[j][i] != 'D') ans = "incorrect";
      if (a[i][j] == 'L' && a[j][i] != 'W') ans = "incorrect";
    }
  }
  cout << ans << endl;
}