#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void solve() {
	int n;
	cin >> n;
	double a[n], sum=0;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
		sum+=a[i];
	}
	sum/=n;
	int ans=INT_MAX;
	for(int i=0; i<n; ++i)
		if(sum==a[i])
			ans=min(ans, i+1);
	if(ans<=n)
		cout << ans;
	else
		cout << "Impossible";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
