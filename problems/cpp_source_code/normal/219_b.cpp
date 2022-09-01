#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> s(3);
  for (int i = 0; i < 3; i++) cin >> s[i];
  string t;
  cin >> t;

  string ans = "";
  for (int i = 0; i < t.size(); i++) ans += s[t[i]-'0'-1];
  cout << ans << endl;
}