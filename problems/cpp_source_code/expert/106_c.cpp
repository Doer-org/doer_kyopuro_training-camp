#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;

  int n = min(int(s.size()), k);
  for (int i = 0; i < n; i++) {
    if (s[i] != '1') {
      cout << s[i] << endl;
      return 0;
    }
  }
  cout << 1 << endl;
}