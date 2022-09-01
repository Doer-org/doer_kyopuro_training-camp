#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  long long t;
  cin >> n >> m >> t;
  vector<int> a(n), b(n);
  for (int i = 1; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    b[x] = y;
  }

  for (int i = 1; i < n; i++) {
    t += b[i];
    t -= a[i];
    if (t <= 0) {
      cout << "No" << endl;
      return 0; 
    }
  }
  cout << "Yes" << endl;
}