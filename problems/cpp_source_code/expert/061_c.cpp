#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  vector<pair<int,int>> a(n);
  for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++) {
    k -= a[i].second;
    if (k <= 0) {
      cout << a[i].first << endl;
      return 0;
    }
  }
}