#include <bits/stdc++.h>
using namespace std;

int main() {
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  int ans = min(r1, r2) - max(l1, l2);
  cout << max(ans, 0) << endl;
}