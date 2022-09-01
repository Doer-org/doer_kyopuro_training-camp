#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, T;
  cin >> n >> T;
  vector<int> t(n);
  for (int i = 0; i < n; i++) cin >> t[i];

  long long ans = T;
  for (int i = 0; i < n-1; i++) {
    ans += min(T, t[i+1] - t[i]);
  }
  cout << ans << endl;
}