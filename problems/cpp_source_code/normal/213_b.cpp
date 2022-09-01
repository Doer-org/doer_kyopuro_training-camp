#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<pair<int,int>> x(n);
  for (int  i = 0; i < n; i++) x[i] = pair<int,int>(a[i], i+1);
  sort(x.rbegin(), x.rend());
  cout << x[1].second << endl;
}