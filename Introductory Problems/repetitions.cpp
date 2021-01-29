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
	string word;
	cin >> word;
	ll len = word.length();
	if (len == 1){
		cout << 1 << "\n";
	}else{
		ll ans = 0;
		for (ll i = 0; i < len - 1; i++){
			ll c = 1;
			while (word[i] == word[i + 1]){
				c++;
				i++;
			}
			ans = max(ans, c);
		}
		cout << ans << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	solve();
	return 0;
}

