#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int ans = (n - 1 + k - 2) / (k - 1);
  cout << ans << endl;
}