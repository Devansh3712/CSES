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
	vector<ll> arr;
	for (ll i = 0; i < n; i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	ll ans = 0;
	for(ll i = 0; i < n - 1; i++){
		if (arr[i + 1] < arr[i]){
			ans += arr[i] - arr[i + 1];
			arr[i + 1] = arr[i];
		}
	}
	cout << ans << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	solve();
	return 0;
}

