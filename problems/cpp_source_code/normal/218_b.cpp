#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> p(26);
  for (int i = 0; i < 26; i++) cin >> p[i];

  string ans = "";
  for (int i = 0; i < 26; i++) ans += p[i] - 1 + 'a';
  cout << ans << endl;
}