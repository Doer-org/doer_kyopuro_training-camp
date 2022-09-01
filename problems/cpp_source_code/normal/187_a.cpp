#include <bits/stdc++.h>
using namespace std;

int s(string t) {
  int ans = 0;
  for (int i = 0; i < t.size(); i++) ans += t[i] - '0';
  return ans;
}

int main() {
  string a, b;
  cin >> a >> b;

  cout << max(s(a), s(b)) << endl;
}