#include <bits/stdc++.h>
#include <string>

typedef long long int ll;
typedef long int l;

#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y

#define sf scanf
#define pf printf
#define endl "\n"

using namespace std;

void solve(){
	ll x, y;
	cin >> x >> y;
	ll ans = 0;
	if (x < y){
		if (y % 2 != 0){
			ans += ((y * y) - x) + 1;
		}else{
			ans += ((y - 1) * (y - 1)) + x;
		}
	}else{
		if (x % 2 != 0){
			ans += ((x - 1) * (x - 1)) + y;
		}else{
			ans += ((x * x) - y) + 1;
		}
	}
	cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;
	while (t--){
		solve();
	}
	return 0;
}

