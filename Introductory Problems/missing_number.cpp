#include <bits/stdc++.h>
#include <string>

typedef long long int ll;
typedef long int l;

#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y

#define sf scanf
#define pf printf

using namespace std;

void solve(){
	ll n;
	cin >> n;
	ll sum = 0;
	ll n_sum = (n * (n + 1)) / 2;
	for (ll i = 1; i < n; i ++){
		ll x;
		cin >> x;
		sum += x;
	}
	cout << n_sum - sum << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	solve();
	return 0;
}

