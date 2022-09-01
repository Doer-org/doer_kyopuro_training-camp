#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n;
  cin >> w >> h >> n;

  int mw = 0, mh = 0;
  for (int i = 0; i < n; i++) {
    int x, y, a;
    cin >> x >> y >> a;
    if (a == 1) mw = max(mw, x);
    if (a == 2) w = min(w, x);
    if (a == 3) mh = max(mh, y);
    if (a == 4) h = min(h, y);
  }
  if (h - mh <= 0 || w - mw <= 0) cout << 0 << endl;
  else cout << (h - mh) * (w - mw) << endl;
}