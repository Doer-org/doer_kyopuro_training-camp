#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> x(m);
  for (int i = 0; i < m; i++) cin >> x[i];

  sort(x.begin(), x.end());
  vector<int> a;
  for (int i = 0; i < m-1; i++) a.emplace_back(x[i+1] - x[i]);
  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < m - n; i++) ans += a[i];
  cout << ans << endl;
}