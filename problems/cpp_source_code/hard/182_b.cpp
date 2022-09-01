#include <bits/stdc++.h>
using namespace std;

int main() {
  int  n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int ans = 0, mx = 0;
  for (int x = 2; x <= 1000; x++) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] % x == 0) cnt++;
    }
    if (mx < cnt) {
      ans = x;
      mx = cnt;
    }
  }
  cout << ans << endl;
}