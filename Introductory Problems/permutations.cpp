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
	ll n;
	cin >> n;
	if (n < 4){
		if (n == 1){
			cout << 1;
		}else{
			cout << "NO SOLUTION";
		}
	}else if (n == 4){
		cout << "2 4 1 3";
	}else{
		for (ll i = 1; i <= n; i += 2){
			cout << i << " ";
		}
		for (ll i = 2; i <= n; i += 2){
			cout << i << " ";
		}
	}
	cout << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	solve();
	return 0;
}

