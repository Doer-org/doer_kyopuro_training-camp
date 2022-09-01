#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  const int INF = 1001001001;
  int ans = INF;
  for (int x = -100; x <= 100; x++) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += (x - a[i]) * (x - a[i]);
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
}