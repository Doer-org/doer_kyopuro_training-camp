#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  for (int i = 0; i < h; i++) cin >> a[i];

  for (int i = 0; i < w+2; i++) cout << '#';
  cout << endl;
  for (int i = 0; i < h; i++) {
    cout << '#';
    for (int j = 0; j < w; j++) cout << a[i][j];
    cout << '#' << endl;
  }
  for (int i = 0; i < w+2; i++) cout << '#';
  cout << endl;
}