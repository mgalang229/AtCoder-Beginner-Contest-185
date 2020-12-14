#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, t;
	cin >> n >> m >> t;
	int a[m], b[m];
	for(int i=0; i<m; ++i)
		cin >> a[i] >> b[i];
	int now=0, bt=n;
	for(int i=0; i<m; ++i) {
		bt-=(a[i]-now);
		now=a[i];
		if(bt<=0) {
			cout << "No\n";
			return 0;
		}
		bt+=(b[i]-a[i]);
		if(bt>n)
			bt=n;
		now=b[i];
	}
	bt-=(t-now);
	cout << (bt>0?"Yes":"No") << "\n";
}
