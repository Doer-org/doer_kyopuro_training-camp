#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<char> s(n);
  for (int i = 0; i < n; i++) cin >> s[i];

  set<char> st;
  for (int i = 0; i < n; i++) st.emplace(s[i]);
  if (st.size() == 3) cout << "Three" << endl;
  else cout << "Four" << endl;
}