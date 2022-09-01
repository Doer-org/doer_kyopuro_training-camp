#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  deque<int> q;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 1) q.emplace_back(a[i]);
    else q.emplace_front(a[i]);
  }
  if (n % 2 == 0) reverse(q.begin(), q.end());
  while(!q.empty()) {
    cout << q.front() << endl;
    q.pop_front();
  }
}