#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m, t;
  cin >> n >> m >> t;
  int a[m], b[m];
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
  }
  int now = 0;
  int battery = n;
  for (int i = 0; i < m; i++) {
    battery -= (a[i] - now);
    now = a[i];
    if (battery <= 0) {
      cout << "No\n";
      return 0;
    }
    battery += (b[i] - a[i]);
    if (battery > n) {
      battery = n ;
    }
    now = b[i];
  }
  battery -= (t - now);
  cout << (battery > 0 ? "Yes" : "No") << '\n';
  return 0;
}
