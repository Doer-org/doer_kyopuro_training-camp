#include <bits/stdc++.h>
using namespace std;

int main() {
  string a,b;
  cin >> a >> b;
  int n = stoi(a + b);
  for (int i = 1; i <= 1000; i++) {
    if (i * i == n) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}