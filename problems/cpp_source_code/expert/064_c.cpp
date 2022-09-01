#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> st;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(a <= 399) a = 0;
    else if(a <= 799) a = 1;
    else if(a <= 1199) a = 2;
    else if(a <= 1599) a = 3;
    else if(a <= 1999) a = 4;
    else if(a <= 2399) a = 5;
    else if(a <= 2799) a = 6;
    else if(a <= 3199) a = 7;
    else {
      cnt++;
      continue;
    }
    st.emplace(a);
  }

  int mn = st.size();
  if (mn == 0) cout << 1;
  else cout << mn;
  cout << " ";
  cout << mn + cnt << endl;
}