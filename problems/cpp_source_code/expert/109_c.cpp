#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n+1);
  for (int i = 0; i < n; i++) cin >> a[i];

  a[n] = x;
  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = __gcd(ans, a[i+1] - a[i]);
  }
  cout << ans << endl;
}