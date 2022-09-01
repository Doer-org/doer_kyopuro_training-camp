#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  
  int ans = 0;
  for (int i = 0; i < n; i++) {
    string t = "";
    set<char> st;
    int cnt = 0;
    for (int j = 0; j < i; j++) st.emplace(s[j]);
    for (int k = i; k < n; k++) {
      if (st.count(s[k])) {
        cnt++;
        st.erase(s[k]);
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
}