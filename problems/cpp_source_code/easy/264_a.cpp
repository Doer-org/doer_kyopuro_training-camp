#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  l--; r--;
  string s = "atcoder";
  for (int i = l; i <= r; i++) cout << s[i];
  cout << endl;
}