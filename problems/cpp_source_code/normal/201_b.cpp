#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int,string>> x(n);
  for (int i = 0; i < n; i++) cin >> x[i].second >> x[i].first;

  sort(x.rbegin(), x.rend());
  cout << x[1].second << endl; 
}