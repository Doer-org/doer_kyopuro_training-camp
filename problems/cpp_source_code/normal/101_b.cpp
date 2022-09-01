#include <bits/stdc++.h>
using namespace std;

int s(int n) {
  int res = 0;
  while(n) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

int main() {
  int n;
  cin >> n;

  int m = s(n);
  if (n % m == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}