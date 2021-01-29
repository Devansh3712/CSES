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
	cout << n << " ";
	while (n != 1){
		if (n % 2 == 0){
			n = n / 2;
		}else{
			n *= 3;
			n++;
		}
		cout << n << " ";
	}
	cout << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	solve();
	return 0;
}

